class Solution {
public:

    bool oops(vector<char> &str,int i,int j)
    {
        cout<<i<<j<<endl;
        if(i>=str.size()/2)
            return true;
        if(str[i]==str[j])
            return oops(str,i+1,j-1);
        return false;

    }
    bool isPalindrome(string s) {
        vector<char> str;
        int j=0;
        for(auto &i: s){
            i = tolower(i);
            if (ispunct(i) or i == ' ') 
                continue;
            str.push_back(i);
            j++;
        }
        if(j==0)
            return true;
            if(j==2)
            {
                return str[0]==str[1];
            }
        return oops(str, 0,j-1);
    }
};