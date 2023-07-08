class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int l=nums.size();
        k%=l;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());      
    }
};