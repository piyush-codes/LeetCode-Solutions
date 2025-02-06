class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto i : strs)
        {
            string ch=i;
            sort(i.begin(),i.end());
            mp[i].push_back(ch);

        }
        vector<vector<string>> str;
        for(auto i : mp)
        {
            str.push_back(i.second);
        }
        return str;
    }
};