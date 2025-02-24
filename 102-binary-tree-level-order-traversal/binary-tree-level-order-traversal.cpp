/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<vector<int>> v;
    void fill(TreeNode* root,int level)
    {
        if(!root)return;
        if (v.size() == level) {
            v.push_back(vector<int>());
        }
        v[level].push_back(root->val);
        fill(root->left,level+1);
        fill(root->right,level+1);
        return;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        fill(root,0);
        return v;
    }
};