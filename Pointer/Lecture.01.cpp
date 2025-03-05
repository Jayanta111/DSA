#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=10;
    int*ptr=&a;
    //Variable address
    cout<<"Variable address:";
cout<<ptr<<endl;
//Pointer address
cout<<"Pointer address:";
cout<<&ptr<<endl;
return 0;

}
