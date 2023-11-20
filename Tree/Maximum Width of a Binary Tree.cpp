class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
       // if(!root) return NULL;
        queue<pair<TreeNode*, int>> q;
        q.push({root,0});
        int mx=0;
        while(!q.empty())
        {
           int size=q.size();
            int minn=q.front().second;
            int first=0,last=0;
            for(int i=0;i<size;i++)
            {
                long long curr=q.front().second-minn;
                TreeNode* node=q.front().first;
                q.pop();
                if(i==0) first=curr;
                if(i==size-1) last=curr;
                if(node->left) q.push({node->left, 2*curr+1});
                if(node->right) q.push({node->right, 2*curr+2});

            }
            mx=max(mx, last-first+1);
        }
        return mx;
    }
};
