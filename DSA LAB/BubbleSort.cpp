#include <iostream>
using namespace std;
//Bubble sort
void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++) {  // Corrected inner loop condition
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap) {
            return; // If no swaps occurred in an iteration, the array is already sorted
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i] ;
    }
    cout<< endl;
}
//Selection Sort
void SelectionSort(int arr[],int n){
for(int i=0;i<n-1;i++){
    int smallestindex=i;
    for(int j=i+1;j<n;j++)
    {
        if (arr[j]>arr[smallestindex]){ //Decending order
            smallestindex=j;
        }
    }
    swap(arr[i],arr[smallestindex]);
}
}
//Insertion Sort
void InsertionSort(int arr[],int n)
{
for(int i=1;i<n;i++){
    int curr=arr[i];
    int prev=i-1; //Privious number
    while(prev>=0 && arr[prev]>curr){
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=curr;
}
}
int main() {// Time complexity is O(n);
    int n = 5;
    int arr[n]; // Corrected array declaration
    cout << "Enter any number to Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    cout << "Bubble Sort" << endl;
    BubbleSort(arr, n);
    printArray(arr, n);
    cout << "Selection Sort" << endl;
    SelectionSort(arr, n);
    printArray(arr, n);
      cout << "Insertion Sort" << endl;
    InsertionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}