#include<iostream>
using namespace std;
struct Node
{
    int info;
    Node* link;
};

int main()
{
    Node* start = nullptr;
    Node* ptr = nullptr;

    ptr = new Node;
    ptr->info = 100;
    ptr->link = nullptr;
    start = ptr;

    ptr = new Node;
    ptr->info = 200;
    ptr->link = nullptr;
    start->link = ptr;

    ptr = new Node;
    ptr->info = 300;
    ptr->link = nullptr;
    start->link->link = ptr;

    cout << "Linked List: ";
    ptr = start;
    while (ptr != nullptr)
    {
        cout<< ptr->info<< " ";
        ptr = ptr->link;
    }
    cout << endl;
    ptr = start;
    Node* temp;
    while(ptr != nullptr)
    {
        temp = ptr;
        ptr = ptr->link;
        delete temp;
    }
}
