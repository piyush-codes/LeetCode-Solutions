class Solution {
public:
    bool canJump(vector<int>& nums) {
       vector<int>dp(nums.size()+1);
       dp[0]=nums[0];
       if(dp[0]==0&&nums.size()>1)
        return false;

       for(int i=1;i<nums.size();i++)
       {
           if(nums[i]==0&&i==dp[i-1]&&i<nums.size()-1)
            return false;
           dp[i]=dp[i-1]>nums[i]+i?dp[i-1]:nums[i]+i;
           
       }
      return true;
    }
};