class Solution {
public:
    vector<int> dp;
int iterate_play(int i, vector<int>& stoneValue, int n){
        for (int i=n-1; i>=0; i--){
            int k0=min(3, n-i);
            int s=stoneValue[i];
            int result=s-dp[(i+1)%3];
            for(int k=1; k<k0; k++){
                s+=stoneValue[i+k];
                result=max(result,s-dp[(i+k+1)%3] );
            }
            dp[i%3]=result;
        }
        return dp[0];
    }
string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        dp.assign(3, 0);
        dp[n%3]=0;
        int win=iterate_play(0, stoneValue,  n);
        if (win>0) return "Alice";
        if (win<0) return "Bob";
        return "Tie";
    }

};