#include <iostream>
#include <vector>
#include <algorithm> // for std::min and std::max
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0, rp = height.size() - 1;

        while (lp < rp) {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]); // Use min to determine height
            int currWater = w * ht;
            maxWater = max(maxWater, currWater);

            // Move the pointer pointing to the shorter height
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};

int main() {
    Solution obj;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7}; 

    int result = obj.maxArea(height);
    cout << "The maximum water the container can hold is: " << result << endl;

    return 0;
}
