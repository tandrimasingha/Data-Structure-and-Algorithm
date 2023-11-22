class Solution {
public:
bool check(TreeNode* root, long l, long r)
{
     if(root==NULL) return true; 
     if(root->val<=l || root->val>=r) return false;
        return check(root->left, l,root->val) && check(root->right, root->val, r);
}
    bool isValidBST(TreeNode* root) {
       return check(root, LONG_MIN, LONG_MAX);
    }
};
