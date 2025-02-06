class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, int> index;
        vector<vector<string>> result;
        for (string& s: strs) {
            string t = s;
            sort(t.begin(), t.end());
            if (index.find(t) == index.end()) { // new anagram
                index[t] = result.size();
                result.push_back({});
            }
            result[index[t]].push_back(s);
        }
        return result;
    }
};