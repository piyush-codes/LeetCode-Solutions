class Solution {
public:
    string minWindow(string s, string t) {
       map<char,int>mp;
       for(char c:t){
           mp[c]++;
       }
       int start=0,end=0,counter=t.size(),minS=0,minL=INT_MAX;
       while(end<s.size())
       {
           if(mp[s[end++]]-->0)counter--;
           while(counter==0)
           {
               if(end-start<minL)
                {
                    minL=end-start;
                    minS=start;
                }
                
                if(mp[s[start++]]++==0)counter++;
           }
       }
       if(minL<INT_MAX)
        return s.substr(minS,minL);
        return "";
    }
};