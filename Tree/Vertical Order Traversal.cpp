class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        queue<pair<TreeNode*, pair<int,int>>> q;
        map<int, map<int, multiset<int>>> m;
        if(root==NULL) return ans;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            TreeNode* t=it.first;
            int r=it.second.first;
            int c=it.second.second;
            m[r][c].insert(t->val);
            if(t->left) q.push({t->left,{r-1,c+1}});
            if(t->right) q.push({t->right,{r+1,c+1}});
        }
       // vector<vector<int>> ans;
        for(auto it: m)
        {
            vector<int> temp;
            for(auto i:it.second)
            {
                for(auto j:i.second) temp.push_back(j);
            }
             ans.push_back(temp);
        }
       return ans;
    }
    

};
