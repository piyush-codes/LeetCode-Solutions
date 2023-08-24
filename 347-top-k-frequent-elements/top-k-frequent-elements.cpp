class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        vector<pair<int,int>> ans;
        for(auto i:mp)
        {
            ans.push_back({i.second,i.first});
        }
        vector<int>sol;
        sort(ans.begin(),ans.end(),greater<pair<int, int> >());
        for(int i=0;i<k;i++)
        {
            sol.push_back(ans[i].second);
        }
        return sol;
    }
};