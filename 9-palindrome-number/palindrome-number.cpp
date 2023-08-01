class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        vector<int>num;
        while(x>0)
        {
            num.push_back(x%10);
            x=x/10;
        }
        int i=0,j=num.size()-1;
        while(i<=j)
        {
            if(num[i]==num[j])
            {
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};