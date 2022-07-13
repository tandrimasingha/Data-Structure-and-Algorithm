
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> ans;
       stack<pair<int,int>> s;
       int i=0;
       while(n>i)
       {
           if(s.empty())
           {
               ans.push_back(-1);
               s.push({price[i],i});
               i++;
           }
           else if(s.size()>0  && s.top().first>price[i])
           {
               ans.push_back(s.top().second);
               s.push({price[i],i});
               i++;
           }
           else
             s.pop();
       }
       for(int i=0;i<n;i++)
       {
           ans[i]=i-ans[i];
       }
       return ans;
    }
};
