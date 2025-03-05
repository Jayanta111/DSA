#include <iostream>

using namespace std;

struct Node {
    int info;
    Node* link;
};

Node* start = nullptr;

void insert() {
    while (true) {
        char choice;
        cout << "Do you want to insert a node? (y/n): ";
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

void deleteNode(int item) {
    Node* current = start;
    Node* previous = nullptr;

    while (current != nullptr) {
        if (current->info == item) {
            if (previous == nullptr) {
                // Delete the first node
                start = current->link;
            } else {
                // Delete a node in the middle or at the end
                previous->link = current->link;
            }
            delete current;
            cout << "Item deleted: " << item << endl;
            return;
        }
        previous = current;
        current = current->link;
    }

    cout << "Item not found." << endl;
}

void display() {
    Node* ptr = start;
    if (start == nullptr) {
        cout << "List is empty." << endl;
    } else {
        cout << "List elements: ";
        while (ptr != nullptr) {
            cout << ptr->info << " ";
            ptr = ptr->link;
        }
        cout << endl;
    }
}

int main() {
    insert();

    display();

    char choice;
    while (true) {
        cout << "Do you want to delete a node? (y/n): ";
        cin >> choice;

        if (choice != 'y') {
            break;
        }

        int item;
        cout << "Enter the element to be deleted: ";
        cin >> item;

        deleteNode(item);

        display();
    }

    return 0;
}