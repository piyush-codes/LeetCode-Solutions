class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        int c=1,p=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==p)continue;
            else
            {
                p=nums[i];
                nums[c++]=p;
            }
        }
        
        return c;
    }
};