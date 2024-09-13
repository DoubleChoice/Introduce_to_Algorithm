#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int* dp = new int[nums.size()];                
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);          //equation: dp[i] = max(dp[i - 1] + nums[i], nums[i])
        }
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            res = max(res, dp[i]);
        }
        return res;
    }
};

int main()
{
    vector<int> nums({ -2,1,-3,4,-1,2,1,-5,4 });
    Solution s;
    cout << s.maxSubArray(nums);
}
