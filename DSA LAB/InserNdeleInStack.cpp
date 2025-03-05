#include <iostream>

using namespace std;

struct Node {
    int info;
    Node* link;
};

Node* start = nullptr;

void push() {
    while (true) {
        char choice;
        cout << "Do you want to insert? (y/n): ";
        cin >> choice;

        if (choice != 'y') {
            break;
        }

        Node* newNode = new Node;
        cout << "Enter the element: ";
        cin >> newNode->info;

        newNode->link = start;
        start = newNode;
    }
}

void pop() {
    if (start == nullptr) {
        cout << "Stack is empty." << endl;
    } else {
        Node* temp = start;
        cout << "Deleted element: " << temp->info << endl;
        start = start->link;
        delete temp;
    }
}

void display() {
    Node* ptr = start;
    if (start == nullptr) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements: ";
        while (ptr != nullptr) {
            cout << ptr->info << " ";
            ptr = ptr->link;
        }
        cout << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }
}