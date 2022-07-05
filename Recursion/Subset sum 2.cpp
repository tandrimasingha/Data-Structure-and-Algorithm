
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        func(nums,0,ds,ans);
        return ans;
    }
   void func(vector<int>& nums, int ind, vector<int> &ds, vector<vector<int>> &ans)
    {
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            func(nums,i+1,ds,ans);
            ds.pop_back();
            
        }
    }
};
