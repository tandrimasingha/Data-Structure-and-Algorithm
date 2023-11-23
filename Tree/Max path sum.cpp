class Solution {
public:
    int findMax(TreeNode* root,int &maxi){
        if(root==NULL) return 0;
        int l=findMax(root->left,maxi);
        int r=findMax(root->right,maxi);
        if(l<0) l=0;
        if(r<0) r=0;
        maxi=max(maxi,l+r+root->val);
        return max(l,r)+root->val;
        
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        findMax(root,maxi);
        return maxi;
    }
};
