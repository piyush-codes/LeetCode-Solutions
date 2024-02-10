class Solution {
public:
    bool check(string s)
    {
        //cout<<s<<endl;
        int start=0,end=s.size()-1;
        while(start<end)
        {
            if(s[start]!=s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int st,end,cnt=0;
        st=0,end=1;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(check(s.substr(i,j-i+1)))
                    cnt++;
            }
        }
        return cnt+s.size();
    }
};