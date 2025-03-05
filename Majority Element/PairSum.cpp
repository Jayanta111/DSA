#include<iostream>
#include<vector>
using namespace std;
vector<int>pairSum(vector<int>nums,int target){
    vector<int>ans;
    int n=nums.size();
    int start=0,end=n-1;
    while (start<end)
    {
        int pairSum=nums[start]+nums[end];
        if(pairSum>target){
            end--;
        }
        else
        if(pairSum<target){
            start++;
        }
        else
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }    
    
    }
return ans;    
};
int main(){
    vector<int>nums={2,7,11,15};
    int target=26;
    vector<int>ans=pairSum(nums,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;
    return 0;
}