class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         if (k == 0) return 0;
        int w = 0;
        int pr = 1;
        for (int l = 0, r = 0; r < nums.size(); r++) {
            pr *= nums[r];
            while (l <= r && pr >= k) {
                pr /= nums[l++];
            }
            w += r - l + 1;
        }
        return w;
    }
};