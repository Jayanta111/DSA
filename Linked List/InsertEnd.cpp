#include<iostream>
using namespace std;
//Self-Referencial Function
struct node {
    int data;
    struct node* link;
};

// Function to add node at the end of the list
struct node* add_at_end(struct node* ptr, int data) {
    // Create a new node
    struct node* temp = new node;
    temp->data = data;
    temp->link = nullptr;

    // Traverse to the end of the list
    struct node* current = ptr;
    while (current->link != nullptr) {
        current = current->link;
    }
    // Link the new node at the end
    current->link = temp;

    return ptr;
}

int main() {
    // Create the first node
    struct node* temp = new node;
    temp->data = 45;
    temp->link = nullptr;

    // Add more nodes at the end
    struct node* ptr = temp;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 108);

    // Print the list
    ptr = temp;
    while (ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }

    return 0;
}
