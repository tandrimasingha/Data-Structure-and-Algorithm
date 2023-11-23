
class Solution {
public:

    int diameterOfBinaryTree(TreeNode* root) {
        int res=0;
        check(root,res);
        return res;
    }
    int check(TreeNode* root, int &res)
    {
        if(root==NULL) return 0;
        int lh=check(root->left, res);
        int rh=check(root->right, res);
        res=max(res, lh+rh);
        return 1+max(lh,rh);
    }
};
