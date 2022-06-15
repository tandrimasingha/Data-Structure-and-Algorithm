class Solution {
public:
    void findCombination(int target, int n, vector<int>& candidates, vector<vector<int>>& ans, vector<int>& ds)
    {
        if(n==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[n]<=target)
        {
            ds.push_back(candidates[n]);
            findCombination(target-candidates[n],n,candidates,ans,ds);
            ds.pop_back();
              
        }
        findCombination(target,n+1,candidates,ans,ds);
    }
    public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> ans;
        vector<int> ds;
        findCombination(target, 0, candidates,ans,ds);
        return ans;
    }
    
};
