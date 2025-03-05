//136. Single Number
//Given a non-empty array of integers nums, 
//every element appears twice except for one. Find that single one.

//You must implement a solution with a linear 
//runtime complexity and use only constant extra space.
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int solution = 0;
        for (int val : nums) {
            solution = solution ^ val;
        }
        return solution;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << sol.singleNumber(nums) << endl;
    return 0;
}
