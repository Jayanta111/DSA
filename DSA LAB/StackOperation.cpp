#include <iostream>
using namespace std;

int MAX = 5;
int STACK[5];
int TOP = -1;

int is_Empty() {
    if (TOP == -1) {
        return 1; // Return 1 for empty
    } else {
        return 0;
    }
}

int is_Full() {
    if (TOP == MAX - 1) { 
        return 1; // Return 1 for full
    } else {
        return 0;
    }
}

int peek() {
    if (!is_Empty()) {
        return STACK[TOP];
    } else {
        cout << "Stack is Empty" << endl;
        return -1; // Return an error value for empty stack
    }
}

int POP() {
    if (!is_Empty()) {
        int a = STACK[TOP];
        TOP--; 
        return a;
    } else {
        cout << "Stack is Empty" << endl;
        return -1; // Return an error value for empty stack
    }
}

int PUSH(int a) {
    if (!is_Full()) {
        TOP++; 
        STACK[TOP] = a;
        return 0; // Success
    } else {
        cout << "Stack is Full" << endl;
        return -1; // Return an error value for full stack
    }
}

int main() {
    PUSH(20);
    PUSH(30);
    PUSH(50);
    PUSH(60);
    PUSH(80);
    PUSH(90);

    cout << "The Element at the Top is :" << peek() << endl;

    cout << "Elements are: ";
    while (!is_Empty()) {
        int a = POP();
        cout << a << " ";
    }
    cout << endl;

    cout << "Stack is Full\n" << (is_Full() ? "true." : "false") << endl;
    cout << "Stack is Empty\n" << (is_Empty() ? "true." : "false") << endl;

    return 0;
}