class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(nums.size()*2);
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);

        }
        return nums;
    }
};