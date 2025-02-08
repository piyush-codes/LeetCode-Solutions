class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int l=0,r=0,len=0,maxFreq=0,maxLen=0,sz=s.size();
        for(r=0;r<sz;r++)
        {
            char ch=s[r];
            mp[ch]++;
            maxFreq=max(maxFreq,mp[ch]);
            while((r-l+1)-maxFreq>k){
                mp[s[l]]--;l++;
            }
            
            maxLen=max((r-l+1),maxLen);
        }
        return maxLen;
    }
};