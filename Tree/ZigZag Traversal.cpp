class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        int flag=0;
        while(!q.empty())
        {
            int size=q.size();
            flag=!flag;
            vector<int> level;
            for(int i=0;i<size;i++)
            {
               TreeNode* node=q.front();
               q.pop();
               
               if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                level.push_back(node->val);
            }
            if(flag==0)
            {
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            
        }
        return ans;
    }
};
