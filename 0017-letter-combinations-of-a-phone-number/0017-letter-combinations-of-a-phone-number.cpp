class Solution {
public:
void fun(string &digits,string &temp,vector<string>&res,int idx, int n,unordered_map<char,string>&cap)
{
    if(idx==n)
    {
        res.push_back(temp);
        return;
    }

    string name=cap[digits[idx]];
    for(int i=0;i<name.size();i++)
    {
        temp.push_back(name[i]);
        fun(digits,temp,res,idx+1,n,cap);
        temp.pop_back();
    }
return ;

}
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>cap;
         cap['2']="abc";
        cap['3']="def";
        cap['4']="ghi";
        cap['5']="jkl";
        cap['6']="mno";
        cap['7']="pqrs";
        cap['8']="tuv";
        cap['9']="wxyz";
        string temp;
        vector<string>res;
        fun(digits,temp,res,0,digits.size(),cap);
        return res;
    }
};