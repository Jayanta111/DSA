#include<iostream>
using namespace std;

int main() {
    // Correct the array declaration
    int arr[2][2] = 
        {10, 11, 12, 13};

    int rows = 2;  // Use proper variable names for clarity
    int cols = 2;

    // Nested loops to print the 2D array
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}
