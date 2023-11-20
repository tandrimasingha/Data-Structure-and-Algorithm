class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size();
        stack<int> open,star;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') open.push(i);
            else if(s[i]=='*') star.push(i);
            else
            {
                if(!open.empty()) open.pop();
                else if(!star.empty()) star.pop();
                else return false;
            }
        }
        while(!open.empty())
        {
            if(star.empty()) return false;
            else
            {
                if(star.top()<open.top()) return false;
                else
                {
                    star.pop();
                    open.pop();
                }
            }
        }
        return true;
    }
};
