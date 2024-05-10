class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(nums.size()*2);
        for(int i=0;i<n*2;i++){
            if(i<n)
            ans[i]=nums[i];
            else
            ans[i]=nums[i-n];

        }
        return ans;
    }
};