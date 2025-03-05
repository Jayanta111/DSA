#include <iostream>
using namespace std;
const int max_nodes=100;
struct node {
    int info;
    node* link;};
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
    cout<<"Current Linked List: ";
    node* ptr=start;
    while (ptr!=nullptr)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
    cout<<endl;
    int loc_index;
    cout<<"Enter index of node to delete: ";
    cin>>loc_index;
    if (start==nullptr)
    {
        cout<<"UNDERFLOW"<<endl;
        return 0;
    }
    node* loc=start;
    node* locp=nullptr;
    int current_index=0;

    while(loc!=nullptr && current_index<loc_index)
    {
        locp=loc;
        loc=loc->link;
        current_index++;
    }

    if (loc==nullptr)
    {
        cout<<"Node not found at index "<<loc_index<<endl;
        return 0;
    }
    if (locp==nullptr)
    {
        start=loc->link;
    }
    else
    {
        locp->link=loc->link;
    }
    loc->link=avail;
    avail=loc;
    cout<<"Node is deleted and Updated Linked List is: ";
    ptr=start;
    while (ptr!=nullptr)
        {
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
    cout<<endl;
}
