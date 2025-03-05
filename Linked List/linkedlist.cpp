#include<iostream>
#include<cstdlib> // For malloc
using namespace std;

struct node {
    int data;           // Single data field for each node
    struct node *link;  // Pointer to the next node
};


int main() {
    // Create the head node
    struct node *head = (struct node *) malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    // Create the second node
    struct node *second = (struct node *) malloc(sizeof(struct node));
    second->data = 70;
    second->link = NULL;
    head->link = second;  // Link head to the second node
    

    // Create the third node
    struct node *third = (struct node *) malloc(sizeof(struct node));
    third->data = 90;
    third->link = NULL;
    second->link = third;  // Link second node to the third node
    struct node *middle=(struct node*)malloc (sizeof(struct node));
    middle->data=25;
    middle->link=NULL;
    middle->link=third;

    // Print the data in the linked list
    cout << " " << head->data;
    cout << " " <<second->data;
        cout<<" "<<middle->data;

    cout << " " << third->data;

    return 0;
}
