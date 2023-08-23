class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indx;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int c=target-nums[i];
            if(indx.count(c) && indx[c]!=i)
                return {i,indx[c]};
            indx[nums[i]]=i;
        }
        return {0,0};
    }
};