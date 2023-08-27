class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int,int>idx;
        int left=0,right=0,n=s.length();
        int ans=0;
        while(left<=right && right <n)
        {
            if(idx[s[right]]==0)
            {
                idx[s[right]]++;
                right++;
                ans=max(ans,(right-left));
            }
            else{
                idx[s[left]]=0;
                left++;
            }
        }
        return ans;
    }
};