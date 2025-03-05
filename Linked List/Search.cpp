#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* next;  // Pointer to the next node
};

// Function to handle adding to an empty list
struct node* addToEmpty(int data) {
    struct node* temp = new node;  // Use new for memory allocation in C++
    temp->data = data;
    temp->next = temp;  // Point to itself since it's a circular list with one node
    return temp;
}

// Function to add node at the end of the list
struct node* addAtEnd(struct node* tail, int data) {
    struct node* newp = new node;  // Create a new node
    newp->data = data;
    newp->next = tail->next;  // Point the new node to the first node (tail->next)
    tail->next = newp;        // Link the current tail to the new node
    tail = newp;              // Update the tail to the new node
    return tail;
}

// Function to search for an element in the circular linked list
int searchElement(struct node* tail, int element) {
    struct node* temp;
    int index = 0;
    
    if (tail == nullptr) {
        return -2;  // If the list is empty
    }

    temp = tail->next;  // Start from the head (tail->next)
    
    // Traverse the list and search for the element
    do {
        if (temp->data == element)
            return index;
        temp = temp->next;
        index++;
    } while (temp != tail->next);  // Stop when we've come full circle
    
    return -1;  // Element not found
}

// Function to print the circular linked list
void printList(struct node* tail) {
    if (tail == nullptr) {
        cout << "The list is empty.\n";
        return;
    }

    struct node* temp = tail->next;  // Start from the head
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);  // Stop when we've come full circle
    cout << endl;
}

int main() {
    struct node* tail = nullptr;
    int element;

    // Adding elements to the list
    tail = addToEmpty(34);
    tail = addAtEnd(tail, 45);
    tail = addAtEnd(tail, 66);
    tail = addAtEnd(tail, 6);

    // Printing the list
    cout << "Elements in the linked list are:\n";
    printList(tail);

    // Searching for an element in the list
    cout << "Enter the element to search in the linked list: ";
    cin >> element;
    
    int index = searchElement(tail, element);
    
    if (index == -2) {
        cout << "Linked list is empty.\n";
    } else if (index == -1) {
        cout << "Element " << element << " not found in the list.\n";
    } else {
        cout << "Element " << element << " is at index " << index << endl;
    }

    return 0;
}
