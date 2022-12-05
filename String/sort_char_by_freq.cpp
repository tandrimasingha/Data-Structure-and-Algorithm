class Solution {
public:
     static bool cmp(pair<char,int>&a, pair<char,int>&b)
    {
        return a.second > b.second;
    }

    string frequencySort(string s) {
        unordered_map<char,int>m;
		string ans="";
		vector<pair<char,int>>vm;
        for(char c:s)
        {
            m[c]++;
        }
        for(auto it:m)
        {
            vm.push_back(make_pair(it.first,it.second));
        }
        sort(vm.begin(),vm.end(),cmp);
        for(auto& i:vm)
        {
          while(i.second-- >0)
          {
              ans+=i.first;
              
          }
        }
       return ans; 
    }
};
