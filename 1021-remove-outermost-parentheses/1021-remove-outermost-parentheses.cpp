class Solution {
public:
    string removeOuterParentheses(string s) {
        int ans=0;
        string res="";
        for(auto x:s)
        {
            if(x=='(')
            {
                if(ans>0)
                {
                    res+=x;
                }
                ans++;
            }
            else{
                ans--;
                if(ans>0)
                {
                    res+=x;
                }
            }
        }
        return res;
    }
};