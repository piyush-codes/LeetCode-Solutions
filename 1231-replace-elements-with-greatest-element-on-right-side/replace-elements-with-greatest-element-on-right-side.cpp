class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int repMax=-1;
        int n=arr.size();
        for(int i=n-1;i>=0;i--)
        {
            int tmp=arr[i];
            arr[i]=repMax;
            repMax=max(repMax,tmp);
        }
        return arr;
    }
};