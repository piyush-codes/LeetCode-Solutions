class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>mp;
        for(auto c:t)mp[c]++;
        int start=0,end=0,counter=t.size(),minS=0,minL=INT_MAX,size=s.size();
        while(end<size){
            if(mp[s[end]]>0)counter--;
            mp[s[end]]--;
            end++;
            while(counter==0)
            {
                if(end-start<minL)
                {
                    minS=start;
                    minL=end-start;

                }
                mp[s[start]]++;
                if(mp[s[start]]>0)
                counter++;
                start++;
            }
        }
        return minL<INT_MAX?s.substr(minS, minL):"";
    }
};