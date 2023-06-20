class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<long long >dp(nums.size());
        dp[0]=nums[0];
        int l=k;
        for(int i=1;i<nums.size();i++){
            dp[i]=dp[i-1]+nums[i];
           cout<<dp[i]<<endl;
        }
      //  dp[nums.size()]=nums
        vector<int>sol(nums.size(),-1);

        for(int i=k+1;i+k<nums.size();++i)
        if(k!=0)
            sol[i]=(dp[i+k]-dp[i-k-1])/(2*k+1);
        else
            sol[i]=nums[i];
        if(2*k<nums.size())
       sol[k]=dp[k+k]/(2*k+1);
        return sol;
    }
};