
class Solution {
public:
    bool rec(string s1, string s2)
    {
        int n=s1.size();
        int flag=0;
         if(s1==s2){   
            return 1;
        }
        for(int k=1;k<n;k++){
            int a=(rec(s1.substr(0,k),s2.substr(0,k))&&rec(s1.substr(k),s2.substr(k)));
            int b=(rec(s1.substr(0,k),s2.substr(n-k))&&rec(s1.substr(k),s2.substr(0,n-k)));
            if(a||b)
            {
                flag=1;
                break;
            }
        }
        return flag;
    }
    bool isScramble(string s1, string s2) {
      if(s1.size()!=s2.size())
          return false;
        return rec(s1,s2);
    }
};
