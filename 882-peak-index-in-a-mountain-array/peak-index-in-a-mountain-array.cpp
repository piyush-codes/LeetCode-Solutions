class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=arr[0],i=1;;
        for(i=1;i<arr.size();i++)
        {
            if(arr[i]>ans)
            {
                ans=arr[i];
            }
            else
                break;
        }
        return i-1;
    }
};