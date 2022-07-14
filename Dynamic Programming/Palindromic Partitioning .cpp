
class Solution{
public:
    int t[501][501];
    bool ispalin(string str, int i,int j)
    {
        while(i<j)
        {
           if(str[i]!=str[j]) return false;
           i++;
           j--;
        }
        return true;
    }
    int solve(string &str, int i, int j)
    {
        if(i>=j) return 0;
        if(ispalin(str,i,j)) return 0;
        if(t[i][j]!=-1) return t[i][j];
        int mn=INT_MAX;
        for(int k=i;k<j;k++)
        {
            if(ispalin(str,i,k))
            {
                int temp=1+solve(str,k+1,j);
                mn=min(temp,mn);
            }
        }
        return t[i][j]=mn;
    }
    int palindromicPartition(string str)
    {
        // code here
        memset(t,-1,sizeof(t));
        return solve(str,0,str.size()-1);
        
    }
};
