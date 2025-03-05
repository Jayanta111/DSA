#include<iostream>
using namespace std;
// Sum Of All array
int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
// product of all array Formula Product = result*result arr[]
int productArray(int arr1[],int n1){
int result=1;
for(int i=0;i<n1;i++){
    result=result*arr1[i];
    
    }
    return result;
} 
int main() {
    int arr[] = {5, 7, 4, 5, 6};
    int n = 5;
    int sum = sumArray(arr, n); // Calling the function 
    cout << "Sum of all numbers: " << sum << endl;
    //Product of all array 
        
        int result=productArray(arr,n); //calling the productArray function
        cout<<"Product of All given array is="<<result<<endl;
    return 0;
}
