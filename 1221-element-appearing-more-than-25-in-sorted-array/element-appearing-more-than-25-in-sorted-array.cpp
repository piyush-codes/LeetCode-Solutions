class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int find=0.25*arr.size();
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
            if(mp[i]>find)
                return i;
        }
    return -1;
    }
};