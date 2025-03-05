#include <iostream>
#include <stack>
#include <cmath>
#include <sstream>
#include <cctype>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string infix) {
    stack<char> st;
    string postfix;
    string number;

    for (char c : infix) {
        if (isdigit(c)) {
            number += c;  // Accumulate digits for multi-digit numbers
        } else {
            if (!number.empty()) {
                postfix += number + " ";
                number.clear();
            }
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    postfix += st.top();
                    postfix += " ";
                    st.pop();
                }
                st.pop(); // Pop the '('
            } else if (isOperator(c)) {
                while (!st.empty() && precedence(c) <= precedence(st.top())) {
                    postfix += st.top();
                    postfix += " ";
                    st.pop();
                }
                st.push(c);
            }
        }
    }

    if (!number.empty()) {
        postfix += number + " ";
    }

    while (!st.empty()) {
        postfix += st.top();
        postfix += " ";
        st.pop();
    }

    return postfix;
}

int evaluatePostfix(string postfix) {
    stack<int> st;
    stringstream ss(postfix);
    string token;

    while (ss >> token) {
        if (isdigit(token[0])) {  // If the token is a number
            st.push(stoi(token));
        } else {  // It's an operator
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();

            switch (token[0]) {
                case '+':
                    st.push(val2 + val1);
                    break;
                case '-':
                    st.push(val2 - val1);
                    break;
                case '*':
                    st.push(val2 * val1);
                    break;
                case '/':
                    st.push(val2 / val1);
                    break;
                case '^':
                    st.push(pow(val2, val1));
                    break;
            }
        }
    }

    return st.top();
}

int main() {
    string infix;
    cout << "Enter the infix expression: ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;

    return 0;
}
