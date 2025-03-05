// INSERTION AFTER A GIVEN NODE
#include <iostream>
using namespace std;
const int max_nodes=100;
struct node {
    int info;
    node* link;
};
int main()
{
    node nodes[max_nodes];
    node* avail=&nodes[0];
    node* start=nullptr;
    for (int i=0; i<max_nodes-1; i++)
    {
        nodes[i].link=&nodes[i+1];
    }
    nodes[max_nodes-1].link=nullptr;
    for (int i=0; i<3; i++)
        {
        int item;
        cout<<"Enter item to insert at the beginning: ";
        cin>>item;
        if (avail==nullptr)
        {
            cout<<"OVERFLOW"<<endl;
            return 0;
        }
        node* newNode=avail;
        avail=avail->link;
        newNode->info=item;
        newNode->link=start;
        start=newNode;
    }
    int item, loc_index;
    cout<<"Enter item to insert: ";
    cin>>item;
    cout<<"Enter the index after which to insert (0 is start): ";
    cin>>loc_index;
    if (avail==nullptr)
    {
        cout<<"OVERFLOW"<<endl;
        return 0;
    }
    node* NEW=avail;
    avail=avail->link;
    NEW->info=item;
    node* loc=nullptr;
    node* ptr=start;
    int curr_index=0;
    while (ptr!=nullptr && curr_index<loc_index)
    {
        loc=ptr;
        ptr=ptr->link;
        curr_index++;
    }
    if (loc==nullptr)
    {
        NEW->link=start;
        start=NEW;    }
    else
    {
        NEW->link=loc->link;
        loc->link=NEW; }
    cout<<"Linked List: ";
    ptr=start;
    while (ptr!=nullptr)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->link; }
    cout<<endl;
}
