class Solution {
public:
    int ans(vector<int>& nums,int flag,int i,int n,vector<int>dp)
    {
        if(i>=n)
            return 0;
        if(dp[i]>=0)
                return dp[i];
        int money;
        money=max(nums[i]+ans(nums,0,i+2,n,dp),ans(nums,1,i+1,n,dp));
        dp[i]=money;
        return money;    
    }
    int rob(vector<int>& nums) {
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
};