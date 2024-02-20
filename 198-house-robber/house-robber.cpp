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
        vector<int>dp(nums.size()+1,-1);
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            dp[i+1]=max(nums[i]+dp[i-1],dp[i]);
        }
        return dp[nums.size()];
    }
};