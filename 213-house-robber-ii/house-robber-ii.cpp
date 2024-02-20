class Solution {
public:

    int ans(vector<int>& nums) {
        vector<int>dp(3,0);
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            dp[2]=max(nums[i]+dp[0],dp[1]);
            dp[0]=dp[1];
            dp[1]=dp[2];
        }
        return max(dp[2],dp[1]);
    }
    int rob(vector<int>& nums) {
        vector<int>temp=nums;
        nums.erase(nums.begin(),nums.begin()+1);
        temp.pop_back();
       return max(ans(nums),ans(temp));
    }
    //0,200,200,340,340
};