#include <iostream>

using namespace std;

struct Node {
    int info;
    Node *left, *right;
};

Node* root = nullptr;

void insert(int item) {
    Node* newNode = new Node;
    newNode->info = item;
    newNode->left = newNode->right = nullptr;

    if (root == nullptr) {
        root = newNode;
    } else {
        Node* current = root;
        Node* parent = nullptr;

        while (current != nullptr) {
            parent = current;
            if (item < current->info) {
                current = current->left;
            } else {
                current = current->right;
            }
        }

        if (item < parent->info) {
            parent->left = newNode;
        } else {
            parent->right = newNode;
        }
    }
}

void preorderTraversal(Node* node) {
    if (node != nullptr) {
        cout << node->info << " ";
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }
}

void display() {
    cout << "Preorder traversal: ";
    preorderTraversal(root);
    cout << endl;
}

int main() {
    int choice, item;

    while (true) {
        cout << "\n1. Insert\n2. Display\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the item to insert: ";
                cin >> item;
                insert(item);
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}