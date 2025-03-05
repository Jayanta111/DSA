//Implement the following operations of the stack:

//1. PUSH 12
//2. PUSH 29
//3. POP 
//4. POP
//5. PUSH 45
//6. PUSH 67
//7. PUSH 11//
//8. POP //Using Vector;

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Stack implementation using a vector (dynamic array)
    vector<int> stack;

    // 1. PUSH 12
    stack.push_back(12);
    cout << "PUSH 12 in the stacks.\n ";
    for (int i : stack) cout<< "After Push 12: "<< i;
    cout << endl;

    // 2. PUSH 29
    stack.push_back(29);
    cout << "PUSH 29 in the stacks: ";
    for (int i : stack) cout<< "After Push 29: "<< i;
    cout << endl;

    // 3. POP
    stack.pop_back();
    cout << "POP in the stacks: \n";
    for (int i : stack) cout<< "After POP End: "<< i; //LIFO
    cout << endl;

    // 4. POP
    stack.pop_back();
    cout << "POP in the stacks: ";
    for (int i : stack) cout << i << " ";
    cout << endl;

    // 5. PUSH 45
    stack.push_back(45);
    cout << "PUSH 45 in the stacks: ";
    for (int i : stack) cout << i << " ";
    cout << endl;

    // 6. PUSH 67
    stack.push_back(67);
    cout << "PUSH 67 in the stacks: ";
    for (int i : stack) cout << i << " ";
    cout << endl;

    // 7. PUSH 11
    stack.push_back(11);
    cout << "PUSH 11 in the stacks: ";
    for (int i : stack) cout << i << " ";
    cout << endl;

    // 8. POP
    stack.pop_back();
    cout << "POP in the stacks: ";
    for (int i : stack) cout << i << " ";
    cout << endl;

    // Final stack state
    cout << "Final stack in the stacks: ";
    for (int i : stack) cout << i << " ";
    cout << endl;

    return 0;
}
