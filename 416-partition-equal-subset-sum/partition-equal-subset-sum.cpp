class Solution {
public:
    bool help(vector<int>& arr,int X,int i,vector<int>& dp){
        if(X==0){
            return true;
        }   
        if(i==arr.size()-1)
            return arr[i]==X;
        if(dp[X]!=-1)
            return dp[X];
        else{
            bool take=false;
            if(arr[i]<=X)
                take=help(arr,X-arr[i],i+1,dp);

            bool ntake=help(arr,X,i+1,dp);
            return dp[X]=take or ntake;
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
            //cout <<sum;
            vector<int>dp(sum+1,-1);
            return help(nums,sum,0,dp);
        }
        return false;
    }
}; 