class Solution {
public:
    int minAddToMakeValid(string s) {
        int fst=0;
        int scnd=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('){
                fst++;
            }
            else if(fst>0) fst--;
            else scnd++;
            
        }
        return abs(fst+scnd);
    }
};