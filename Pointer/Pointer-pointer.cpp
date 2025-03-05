#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=11;
    int*ptr=&a;
    int**parptr=&ptr;
    //First Pointer 
    cout<<"First Pointer:"<<&ptr<<endl;
        //2nd Pointer 
    cout<<"2nd Pointer:"<<parptr<<endl;
return 0;

}