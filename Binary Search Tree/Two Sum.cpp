class Solution {
public:
 void inorder(TreeNode* root, vector<int>&arr)
    {
        if(root==NULL) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }
    bool findTarget(TreeNode* root, int k) {
         vector<int> arr;
      inorder(root,arr);
      int l=0;
      int e=arr.size()-1;
      while(l<e)
      {
         if(arr[l]+arr[e]==k) return true;
         else if(arr[l]+arr[e]<k) l++;
         else
         e--;
      }
      return false;
    }
};
