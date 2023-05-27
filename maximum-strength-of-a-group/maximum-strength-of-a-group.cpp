class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int c=0;
        sort(nums.begin(),nums.end());

        long long int s=1;
            for(int i=0;i<nums.size();i++)
            {
                if((s<0&&nums[i]<0)||(i+1<nums.size()&&nums[i+1]<0&&nums[i]<0))
                    s*=nums[i];
                else if(nums[i]>0)
                    s*=nums[i];
                else if(nums[i]==0)
                    c=c+1;
            }
      //  cout<<c<<endl;
        if(c>=nums.size()-1)
            return nums[nums.size()-1];
        
        return s;
    }
};