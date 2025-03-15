class Solution {
public:
vector<vector<int>>res;
void dfs(vector<int>& nums , int i ,vector<int>tmp)
{
    if(i==nums.size()){
        res.push_back(tmp);
        return;
    }
    tmp.push_back(nums[i]);
    dfs(nums,i+1,tmp);
    tmp.erase(tmp.begin()+i);
    dfs(nums,i+1,tmp);

    
}
    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums,0,{});
        return res;
    }
};