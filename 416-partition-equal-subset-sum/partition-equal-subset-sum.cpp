class Solution {
public:
    bool helper(vector<int> &nums,int pos,int target,vector<int>& dp){
        if(target==0){
            return true;
        }
        if(pos==(nums.size()-1))
            return nums[pos]==target;
        if(dp[target]!=-1)
            return dp[target];
        else{
            bool a=false;
            if(nums[pos]<=target)
                a=helper(nums,pos+1,target-nums[pos],dp);
              
          bool  b=helper(nums,pos+1,target,dp);
            return dp[target]=a or b;
        }
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int x:nums)
            sum+=x;
        if(sum % 2 == 1){
            return false;
        } 
        else{
            sum/=2;
            vector<int>dp(sum+1,-1);
            return helper(nums,0,sum,dp);
        }
        return false;

    }
};