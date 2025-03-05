#include <iostream>
using namespace std;
#define size 6

class circle_queue {
private:
    int queue[size];
    int front, rear,N;
public:
    circle_queue()
    {
        front =rear=-1;
    }
    void insert(int item)
     {
         N=size-1;
        if ((front ==0 && rear == N) || (front == rear + 1))
        {
            cout << "Queue is Full" << endl;
            return;
        }
        else if(rear == -1)
            {
            front = rear = 0;
            queue[rear] = item;
        }
        else if(rear == N)
        {
            rear = 0;
        queue[rear] = item;
        }
        else
        {
            rear++;
        queue[rear] = item;
        }
    }
    void display()
     {
         int i;
         if(rear>=front)
         {
             for(i=front;i<=rear;i++)
             {
                 cout<<queue[i]<<"\t";
             }
         }
         else
            {
            for(i=front;i<=N;i++)
            {
                cout<<queue[i]<<"\t";
            }
            for(i=0;i<=rear;i++)
            {
                cout<<queue[i]<<"\t";
            }
         }
         cout<<endl;
    }};
int main()
{
    circle_queue obj;
    obj.insert(10);
    obj.insert(20);
    obj.insert(30);
    obj.insert(40);
    obj.insert(50);
    obj.display();
    obj.insert(60);
    cout<<"queue after one more insertion:"<<endl;
    obj.display();
}
