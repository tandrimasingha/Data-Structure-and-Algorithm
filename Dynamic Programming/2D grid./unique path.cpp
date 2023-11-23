class Solution {
public:
int t[101][101]={0};
    int unique(int m,int n)
    {
        if(m==0||n==0) return 1;
        if(t[m][n]!=0) return t[m][n];
        else
        {
            return t[m][n]=unique(m-1,n)+unique(m,n-1);
        }
    }
    int uniquePaths(int m, int n) {
        return unique(m-1,n-1);
    }
};
