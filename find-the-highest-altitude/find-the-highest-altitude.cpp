class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      //  vector<int>dp(gain.size()+1);
        //dp[0]=0;
        int j=1,m=INT_MIN,S=0;
        for(auto i:gain){
            S+=i;
            m=max(m,S);
            j++;
        }
        return max(m,0);;
    }
};