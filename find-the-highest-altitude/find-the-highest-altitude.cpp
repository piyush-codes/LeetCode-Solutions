class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>dp(gain.size()+1);
        dp[0]=0;
        int j=1,m=INT_MIN;
        for(auto i:gain){
            dp[j]=dp[j-1]+i;
            m=max(m,dp[j]);
            j++;
        }
        return max(m,0);;
    }
};