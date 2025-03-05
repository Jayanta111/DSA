#include<iostream>
using namespace std;
#define Size=10;
class Stacks{
    int arr[Size];
    int top;
}
public:
Stack(){
    top=-1;
}
void Push(int value){
    if(top>=(Size-1)){
        cout<<"Stack Overflow"<<endl;

    }
    else{
        cout<<arr[++top]=value;
        cout<<"PUSH:\n"<<value<<endl;
        displayStack();
    }
}
void Pop(){
    if(top<0){
        cout<<"Stack Underflow."<<endl;
    }
else{
    cout<<"POP";
    top--;
    displayStack();
}
}
void displayStack(){
    if(top>=0){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ":

        }
        else{
            cout<<"Empty Stack.";
        }
        cout<<endl;
    }
};
int main(){
    Stack stack;
    stack.push(12);
    stack.push(29);
    stack.pop();
    stack.pop();
    stack.push(45);
    stack.push(67);
    stack.push(11);
    stack.pop();
    return 0;
}