#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n;
        if (binForm < 0) {
            x = 1 / x;
            binForm = -binForm;
        }
        
        double ans = 1.0; // Initialize ans to 1
        
        while (binForm > 0) {
            if (binForm % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }
        return ans;
    }
};

int main() {
    double x = 2.0;    // Set x as a double to match the function signature
    int n = 10;        // Set an appropriate value for n
    Solution obj;
    
    double result = obj.myPow(x, n);
    cout << "Result: " << result << endl; // Output the result
    
    return 0;
}
