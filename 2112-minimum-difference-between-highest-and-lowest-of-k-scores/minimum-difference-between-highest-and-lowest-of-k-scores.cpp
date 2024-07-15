class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sol=nums[k-1]-nums[0];
        for(int i=k;i<nums.size();i++)
        {
            sol=min(sol,nums[i]-nums[i-k+1]);
        }
        return sol;
    }
};