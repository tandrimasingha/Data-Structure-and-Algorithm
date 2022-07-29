
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        int i=0;
        int j=0;
        int sum=0;
        int mx=0;
        while(j<N)
        {
            sum+=A[j];
            if(sum<k)
            j++;
            else if(sum==k)
            {
              mx=max(j-i+1,mx);  
            }
            else if(sum>k)
            {
                while(sum>k)
                {
                    sum=sum-A[i];
                    i++;
                }
                j++;
            }
           
        }
        return mx;
    } 

};
