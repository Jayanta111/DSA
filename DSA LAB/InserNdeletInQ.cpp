#include <iostream>

using namespace std;

struct Node {
    int info;
    Node* link;
};

Node* front = nullptr;
Node* rear = nullptr;

void insert() {
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

        if (front == nullptr) {
            front = rear = newNode;
        } else {
            rear->link = newNode;
            rear = newNode;
        }
    }
}

void del() {
    while (true) {
        char choice;
        cout << "Do you want to delete? (y/n): ";
        cin >> choice;

        if (choice != 'y') {
            break;
        }

        if (front == nullptr) {
            cout << "Queue is empty." << endl;
        } else {
            Node* temp = front;
            front = front->link;
            delete temp;
            cout << "Deleted element: " << temp->info << endl;

            // If the queue becomes empty after deletion
            if (front == nullptr) {
                rear = nullptr;
            }
        }
    }
}

void display() {
    Node* ptr = front;
    if (front == nullptr) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements: ";
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
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                del();
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