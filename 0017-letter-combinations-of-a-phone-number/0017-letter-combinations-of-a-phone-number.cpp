class Solution {
public:
void fun(string &digits,int idx,int n,string &diary,vector<string>&res,unordered_map<char,string>&cap)
{   if(idx==n){
    res.push_back(diary);
    return ;
}
    string count=cap[digits[idx]];
    for(int i=0;i<count.size();i++)
    {
       diary.push_back(count[i]);
       fun(digits,idx+1,n,diary,res,cap);
        diary.pop_back();
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
    string diary="";
    vector<string>res;
    int n=digits.size();
    fun(digits,0,n,diary,res,cap);
return res;
    }
};