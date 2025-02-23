class Solution {
public:
    vector<int>DP;
    int dp(int i,int n)
    {
        if(i>n)return 0;
        if(i==n)return 1;
        if(DP[i]!=-1)return DP[i];
        return DP[i]=dp(i+1,n)+dp(i+2,n);
    }
    int climbStairs(int n) {
        DP.resize(46,-1);
        return dp(0,n);
    }
};