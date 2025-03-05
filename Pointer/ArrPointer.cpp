#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;
    //Predict output
    int arr1[]={10,20,30,40};
    int*ptr=arr1;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    cout<<*(ptr+3)<<endl;
ptr++;
cout<<*ptr<<endl;

    return 0;
}