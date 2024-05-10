class Solution {
public:
        int characterReplacement(string s, int k) {
        int ans=0,maxR=0;
        unordered_map<int,int>mp;
        for(int i=0;i<s.length();i++)
        {
            maxR=max(maxR,++mp[s[i]]);
            if(ans-maxR<k)
             ans++;
             else
             mp[s[i-ans]]--;
        }
        return ans;
    }
};