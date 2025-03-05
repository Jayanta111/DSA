#include<iostream>
using namespace std;
void display(int arr[],int size){
    for(int i=0;i<size;i++){
     cout<<" "<<arr[i];
     
 }
};
int main()
{
    int arr[]={12,14,78,31,16};
    int size=5;
   display(arr,size);
    return 0;
}