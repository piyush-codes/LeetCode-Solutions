class Solution {
public:
    bool canJump(vector<int>& nums) {
        long long int i=0,f=0;
        for(i=0;i<nums.size();i++)
        {
            if(i+nums[i]>f){
                f=i+nums[i];
               // cout<<f<<" "<<i<<endl;

            }
            if(nums[i]==0&&i<nums.size()-1&&i==f)
                    return false;

        }
        return true;
    }
};