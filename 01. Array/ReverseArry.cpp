#include<iostream>
using namespace std;
void ReverseArry(int arr[], int sz){
    int start=0,end=sz-1; // Start from Array 0 and End is sz-1;
    // for check the conditio we used while start to ending
    while(start<end){
        swap(arr[start],arr[end]); // reverseArry
        start++;
        end--;

    }
};
int main(){
    int arr[]={1,2,3,4,5,6};
    int sz=6;
    ReverseArry(arr, sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i] << " ";

    }
    cout<<endl;
    return 0;
}