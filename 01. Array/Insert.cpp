#include<iostream>
using namespace std;

// Function to insert a key at a specified position
int insert(int arr[], int size, int key, int pos, int capacity)
{
    if(size >= capacity)  // Checking if the array is full
    {
        return size;
    }

    if(pos < 0 || pos > size)  // Checking if the position is valid
    {
        cout << "Invalid position!" << endl;
        return size;
    }

    // Shift elements to the right from the position onwards
    for(int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = key;  // Insert the key at the specified position
    return size + 1;  // Return the new size
}

int main() {
    int arr[20];  // Declare an array with capacity of 20
    int size = 5; // Initial size of the array
    int capacity = 20;
    int key, pos;
    
    // Input 5 numbers into the array
    cout << "Enter 5 Numbers in the Array:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Display the current array
    cout << "Array Numbers are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Insert the new number into the array at a specific position
    cout << "Enter the number to insert: ";
    cin >> key;
    cout << "Enter the position to insert (0 to " << size << "): ";
    cin >> pos;
    
    size = insert(arr, size, key, pos, capacity);  // Update the size after insertion
    
    // Display the array after insertion
    cout << "\nAfter Insertion: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
