class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        inorder(root, arr);
        return arr[k-1];
    }
    void inorder(TreeNode* root, vector<int> &arr)
    {
        if(root==NULL) return;

        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }
};
