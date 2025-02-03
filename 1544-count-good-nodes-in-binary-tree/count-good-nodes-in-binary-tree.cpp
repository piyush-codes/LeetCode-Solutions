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
int count=0;
    void postorder(TreeNode* root,int largest)
    {
        if(!root)
            return;
        else{
            if(root->val >= largest){
                count++;
                largest=root->val;
            }
            postorder(root->left,largest);
            postorder(root->right,largest);
        }
    }
    int goodNodes(TreeNode* root) {
        long long int largest=INT_MIN; 
        postorder(root,largest);
        return count;
        
    }
};