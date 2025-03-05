#include<iostream>
using namespace std;

// Defining the node structure
struct node {
    int data;           // Single data field for each node
    struct node *link;  // Pointer to the next node
};

// Function to count the number of nodes in a linked list
void count_of_nodes(struct node *head) {
    int count = 0;
    
    // Check if the linked list is empty
    if(head == NULL) {
        cout << "Linked List is empty." << endl;
        return;
    }

    // Traverse the linked list to count the nodes
    struct node *ptr = head;
    while(ptr != NULL) {
        count++;
        ptr = ptr->link;
    }

    // Output the count of nodes
    cout << "Number of nodes: " << count << endl;
}

int main() {
    // Example linked list creation (same as before)
    struct node *head = (struct node *) malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *second = (struct node *) malloc(sizeof(struct node));
    second->data = 70;
    second->link = NULL;
    head->link = second;

    struct node *third = (struct node *) malloc(sizeof(struct node));
    third->data = 90;
    third->link = NULL;
    second->link = third;
    struct node *four=(struct node*)malloc (sizeof(struct node));
    four->data=88;
    four->link=NULL;
    third->link=four;

    // Call function to count nodes
    count_of_nodes(head);

    return 0;
}
