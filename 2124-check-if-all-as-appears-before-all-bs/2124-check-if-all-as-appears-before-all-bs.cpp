class Solution {
public:
    bool checkString(string s) {
        bool res=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b') {
                res=1;
            }
            if(res==1 && s[i]=='a') return 0;
            
        }
        return 1;
    }
};