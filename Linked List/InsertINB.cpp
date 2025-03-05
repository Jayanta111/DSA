//INSERTION  AT THE BEGINNING OF THE LIST
#include <iostream>
using namespace std;
const int MAX_NODES = 100;
struct Node
 {
    int info;
    Node* link;
};
int main()
{
    Node nodes[MAX_NODES];
    Node* avail = &nodes[0];
    Node* start = nullptr;
    for(int i=0;i<MAX_NODES-1;i++)
    {
        nodes[i].link = &nodes[i + 1];
    }
    nodes[MAX_NODES - 1].link = nullptr;

    for(int i=0;i<=3;i++)
    {
        int Item;
        cout << "Enter item to insert: ";
        cin >> Item;

        if (avail == nullptr)
        {
            cout << "OVERFLOW" << endl;
            return 0;
        }

        Node* NEW = avail;
        avail = avail->link;
        NEW->info = Item;
        NEW->link = start;
        start = NEW;
    }
    cout << "Linked List: ";
    Node* ptr = start;
    while(ptr!=nullptr)
    {
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
    cout << endl;
}
