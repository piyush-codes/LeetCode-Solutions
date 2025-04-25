class Solution {
public:
    vector<int>dp;
    void solve(vector<int>& coins, int amount,int i)
    {
        if(i>amount)
            return ;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++)
            {
                if(coins[j]<=i)
                {
                    if(coins[j]==i)
                        dp[i]=1;
                    else{
                        if(dp[i-coins[j]]!=INT_MAX)
                         dp[i]=min(dp[i],1 + dp[i-coins[j]]);
                    }
                }
            }
        }
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        dp.resize(amount+1,INT_MAX);
        solve(coins,amount,1);
        dp[0]=0;
        return dp[amount]==INT_MAX?-1:dp[amount];

    }
};