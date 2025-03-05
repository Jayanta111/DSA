#include <iostream>
#include <vector>
using namespace std;

int rebinarySearch(vector<int> arr, int st, int end, int tar) {
    if (st <= end) {
        int mid = st + (end - st) / 2;  // Avoid overflow

        if (arr[mid] == tar) {
            return mid;  // Target found, return index
        } else if (tar > arr[mid]) {
            return rebinarySearch(arr, mid + 1, end, tar);  // Move right
        } else {
            return rebinarySearch(arr, st, mid - 1, tar);  // Move left
        }
    }
    return -1;  // Target not found
}

int main() {
    vector<int> arr1 = { -1, 0, 3, 5, 9, 12 };
    int tar1 = 5;

    int result = rebinarySearch(arr1, 0, arr1.size() - 1, tar1);  // Call the binary search function
    if (result != -1) {
        cout << "Number found at index: " << result << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}
