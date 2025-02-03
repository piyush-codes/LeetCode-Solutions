class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sz=nums.size();
        if(sz<=3 || nums[0]>=0)
        return nums[sz-1]*nums[sz-2]*nums[sz-3];
        return max(nums[sz-1]*nums[sz-2]*nums[sz-3] , nums[0]*nums[1]*nums[sz-1]);
    }
};