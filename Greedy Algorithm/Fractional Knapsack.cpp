double fractionalKnapsack(int w, Item arr[], int n) 
{
    vector<pair<int, int>> nums;
    for (int i = 0; i < n; i++) 
    {
        nums.push_back({arr[i].value, arr[i].weight});
    }
    
    sort(nums.begin(), nums.end(), [](const pair<int, int>& a, const pair<int, int>& b) 
    {
            return static_cast<double>(a.first) / a.second > static_cast<double>(b.first) / b.second;
    });
    
    double sum=0;
   for(int i=0;i<nums.size();i++)
   {
       if(w<=0)
       {
           break;
       }
       if(nums[i].second<=w)
       {
           sum+=nums[i].first;
           w-=nums[i].second;
       }
       else
       {
            
            sum+=(double)(nums[i].first*w)/(nums[i].second);
            // sum+=re;
            w=0;
            break;
       }
   }
    return sum;
    }
