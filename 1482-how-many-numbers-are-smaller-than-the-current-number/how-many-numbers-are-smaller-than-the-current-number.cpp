class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
       int mp[102] = {0};
        for(auto i:nums)
        {
            mp[i+1]++;
        }
        for(int  i=1;i<102;i++)
        {
            mp[i]+=mp[i-1];
        }
        for(int i=0;i<nums.size();i++)
        {
           nums[i]=mp[nums[i]];
        }
            return nums;
    }
};