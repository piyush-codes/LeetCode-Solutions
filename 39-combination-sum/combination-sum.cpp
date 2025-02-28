class Solution {
public:
    vector<vector<int>> res;
    void dfs(int i, vector<int> cur,int target,vector<int>& candidates)
    {
        if(target==0)
        {
            res.push_back(cur);
            return;
        }
        if(i==candidates.size()|| target<0)
            return;

        dfs(i+1,cur,target,candidates);
        cur.push_back(candidates[i]);
        dfs(i,cur,target-candidates[i],candidates);
        cur.pop_back();

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        dfs(0,{},target,candidates);
        return res;
    }
};