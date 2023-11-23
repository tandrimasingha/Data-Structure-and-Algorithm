class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int m=0;
        while(i<=j)
        {
           m=(i+j)/2;
           if(nums[m]==target) return m;
           else if(nums[i]>nums[m] )
           {
              if(nums[m]>target && target>=nums[i])
              {
                  j=m-1;
              }
              else
              {
                  i=m+1;
              }
           }
           else if(nums[j]<nums[m])
           {
               if(nums[m]>target && target<=nums[j])
               {
                   i=m+1;
               }
               else
               j=m-1;
           }
           else 
           {
               if(target<nums[m])
                 j=m-1;
                else
                i=m+1;
           }
        }
        return -1;
    }
};
