class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1,maxvol=0;
        while(left<right)
        {
            maxvol=max(maxvol,(right-left)*min(height[right],height[left]));
            height[left]>height[right]?right--:left++;
        }
        return maxvol;
    }
};