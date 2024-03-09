class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(nums1[x]<nums2[y] )
            {
                if(x<nums1.size()-1)
                x++;
            }
            else if(nums2[y]<nums1[x])
                if(y<nums2.size()-1){
                y++;
                }
            if(nums1[x]==nums2[y])
                return nums1[x];
        }
        return -1;
    }
};