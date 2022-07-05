
class Solution {
    void func(int ind, vector<int>& nums,vector<int>& ds,vector<vector<int>> &ans)
    {
        if(ind==nums.size())
        {
           ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        func(ind+1,nums,ds,ans);
        ds.pop_back();
        func(ind+1,nums,ds,ans);
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int> ds;
        vector<vector<int>> ans;
        func(0,nums,ds,ans);
        return ans;
    }
};
