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
    vector<int> rightSideView(TreeNode* root) {
         if (!root) return {};  // Edge case: empty tree
        
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size();
            int rightmostValue = 0;
            
            for (int i = 0; i < levelSize; i++) {
                TreeNode* cur = q.front();
                q.pop();
                
                // Update rightmost value at this level
                rightmostValue = cur->val;
                
                if (cur->left) q.push(cur->left);
                if (cur->right) q.push(cur->right);
            }
            
            ans.push_back(rightmostValue);
        }
        
        return ans;
    }
};