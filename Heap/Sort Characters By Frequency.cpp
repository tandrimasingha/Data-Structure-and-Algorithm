class Solution {
public:
    string frequencySort(string s) {
       priority_queue<pair<int,char>> q;
       unordered_map<char,int> mp;
        string st="";
        for(auto it:s)
            mp[it]++;
        for(auto it:mp)  
        {
          q.push({it.second,it.first});  
        }
        while(!q.empty())
        {
            char c=q.top().second;
            int k=q.top().first;
            for(int i=0;i<k;i++)
            {
                st+=c;
            }
            q.pop();
        }
        return st;
    }
};
