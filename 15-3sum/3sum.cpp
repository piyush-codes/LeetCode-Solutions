//Optimized Approach - O(n^2 logn + nlogn) - o(n^2 logn) time and O(n) space
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            //-4,-1,-1,0,1,2
            while(j<k)
            {
               int sum=nums[i]+nums[j]+nums[k];//-4+-1+2=-3
                if(sum == target){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum<target)
                    j++;
                else
                    k--;
            }
        }
        for(auto i : s)
        {
            output.push_back(i);
        }
        return output;
    }
};