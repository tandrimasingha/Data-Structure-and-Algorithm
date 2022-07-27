
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        unordered_map<int,int> mp;
        for(auto it:nums)
            mp[it]++;
        for(auto it:mp)
        {
            q.push({it.second,it.first});
            if(q.size()>k)
                q.pop();
        }
        while(!q.empty()){
            v.push_back(q.top().second);
            q.pop();
        }
        return v;
    }
};
