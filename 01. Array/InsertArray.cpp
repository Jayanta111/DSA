#include<iostream>
using namespace std;
int main() {
    int n, k, item, i;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements of the array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position where you want to insert the new element: ";
    cin>>k;
    cout<<"Enter the element to insert: ";
    cin>>item;

    int N=n-1;
    i=N;
    while(i>=k)
    {
        arr[i+1]=arr[i];
        i = i - 1;
    }
    arr[k] = item;
    n = n + 1;
    cout << "Array after insertion: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}
