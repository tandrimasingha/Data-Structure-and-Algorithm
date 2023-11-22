#BST
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        int cur=root->val;
        if(cur<p->val && cur<q->val)
        return lowestCommonAncestor(root->right, p,q);
        if(cur>p->val && cur>q->val)
        return lowestCommonAncestor(root->left, p,q);

        return root;
    }
};

# BT
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root==p || root==q) return root;
        TreeNode* l=lowestCommonAncestor(root->left,p,q);
        TreeNode* r=lowestCommonAncestor(root->right,p,q);
        if(l==NULL) return r;
        if(r==NULL) return l;


        
        return root;
    }
};


