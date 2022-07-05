
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> ans;
        map<string,vector<string>> m;
        for(int i=0;i<string_list.size();i++)
        {
            string s=string_list[i];
            sort(s.begin(),s.end());
            m[s].push_back(string_list[i]);
        }
        for(auto it:m)
        {
            ans.push_back(it.second);
        }
        return ans;
        
    }
};
