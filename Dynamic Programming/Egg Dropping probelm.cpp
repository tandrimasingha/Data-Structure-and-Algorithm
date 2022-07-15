
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int t[201][201];
    int solve(int n, int k)
    {
        if(k==1 || k==0||n==1){
            return k;
        }
        if(t[n][k]!=-1) return t[n][k];
        int ans = INT_MAX;
        for(int i=1;i<=k;i++){
            int temp = max(solve(n-1,i-1),solve(n,k-i))+1;
            ans = min(ans,temp);
        }
        return t[n][k]=ans;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(t,-1,sizeof(t));
        return solve(n,k);
    }
    
};
