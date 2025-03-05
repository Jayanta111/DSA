#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int majorityelement (vector<int>& nums){
        int freq = 0;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};

int main(){
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    vector<int> nums(size);  // Create a vector of the given size

    cout << "Enter the numbers to find Majority Element:" << endl;
    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.majorityelement(nums);  // Pass the vector to the function
    cout << "Majority element is: " << result << endl;  // Print the result
    return 0;
}
