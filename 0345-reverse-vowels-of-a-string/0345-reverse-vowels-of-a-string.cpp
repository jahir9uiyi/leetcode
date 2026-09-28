class Solution {
public:
bool check(char ch)
{
    if( ch =='a'||
        ch=='e' ||
        ch=='i' ||
        ch=='o' ||
        ch=='u' ||
        ch=='A' ||
        ch=='E' ||
        ch=='I' ||
        ch=='O' ||
        ch=='U' 
    )
    {
        return true;
    }
    return false;
}
    string reverseVowels(string s) {  
        vector<char>vow;
        vector<int>res;
        for(int i=0;i<s.size();i++)
        {
            if(check(s[i]))
            {
                vow.push_back(s[i]);
                res.push_back(i);
            }
        }
        reverse(vow.begin(),vow.end());
        for(int i=0;i<res.size();i++)
        {
            s[res[i]]=vow[i];
        }
        return s;
    }
};