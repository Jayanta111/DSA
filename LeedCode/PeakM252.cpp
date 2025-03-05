#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 0, end = A.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            
            // Ensure mid-1 and mid+1 are within bounds
            if (mid > 0 && mid < A.size() - 1 &&
                A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) {
                return mid;
            } 
            else if (A[mid] < A[mid + 1]) { // Move right
                st = mid + 1;
            } 
            else { // Move left
                end = mid - 1;
            }
        }
        return -1; // This case won't be reached for a valid mountain array
    }
};

int main() {
    vector<int> A = {0, 3, 8, 9, 5, 2};
    Solution obj;
    int result = obj.peakIndexInMountainArray(A);
    cout << "Peak index: " << result << endl;
    return 0;
}
