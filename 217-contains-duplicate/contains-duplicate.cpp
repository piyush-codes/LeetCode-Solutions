class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>ind;
        for(int i:nums)
        {
            if(ind.count(i)!=0)
                return true;
            else
                ind[i]=1;
        }
        return false;
    }
};