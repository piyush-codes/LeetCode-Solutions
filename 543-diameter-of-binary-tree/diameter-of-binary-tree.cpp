class Solution {
public:
int res=0;
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        maxHeight(root);
        return res;
        
    }

    int maxHeight(TreeNode* root) {
        if (!root) return 0;
        int left= maxHeight(root->left);
        int right= maxHeight(root->right);
        res=max(res,left+right);

        return 1 + max(left,right);
    }
};