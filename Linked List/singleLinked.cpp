#include<iostream>
using namespace std;
struct node
{
int data1;
int data2;
int data3;
int data4;
struct node *link;
};

int main(){
    struct node *head=NULL;
    head=(struct node*) malloc (sizeof(struct node));  
    head->data1=45;
    head->link=NULL;
    struct node *One=NULL;
    One=(struct node*) malloc (sizeof(struct node)); 
    One->data2=46; 
    One->link=NULL;
    struct node *Two=NULL;
    Two=(struct node*) malloc (sizeof(struct node));  
    Two->data3=47;
    Two->link=NULL;
    struct node *three=NULL;
    three=(struct node*) malloc (sizeof(struct node));  
    three->data4=49;
    three->link=NULL;


    cout<<" "<<head->data1;
  cout<<" "<<One->data2;
    cout<<" "<<Two->data3;
    cout<<" "<<three->data4;
   

    return 0;
    
}
