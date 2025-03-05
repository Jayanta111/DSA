#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar) {
    int st = 0, end = arr.size() - 1;
    
    while (st <= end) {
        int mid = st + (end - st) / 2;  // Avoid overflow

        if (arr[mid] == tar) {
            return mid;  // Target found, return index
        } 
        else if (tar > arr[mid]) {
            st = mid + 1;  // Move right
        } 
        else {
            end = mid - 1;  // Move left
        }
    }
    return -1;  // Target not found
}

int main() {
    vector<int> arr1 = { -1, 0, 3, 5, 9, 12 };
    int tar1 = 50;

    int result = binarySearch(arr1, tar1);
    if (result != -1) {
        cout << "Number found at index: " << result << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}
