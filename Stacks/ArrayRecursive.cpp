#include<iostream>
using namespace std;

void print_Arr(int arr[], int i, int j) {
    if(i == j) {
        cout << arr[i];
        return;
    } else {
        cout << arr[i] << " \n";
        print_Arr(arr, i + 1, j);
    }
}

int main() {
    int arr[5] = {5, 6, 7, 9, 4};
    print_Arr(arr, 1,5); // Calling the function with the correct parameters
    return 0;
}
