class Solution {
public:
bool check(string s)
{
        string rev = s;
        reverse(rev.begin(), rev.end());

        if(s != rev) return false;

    return true;
}
void fun(string &s, vector<vector<string>>& res,vector<string>&temp,int idx)
{
    if(idx==s.size()) {
      res.push_back(temp);
        return;
    }

    for(int i=idx;i<s.size();i++)
    {
        string x=s.substr(idx,i-idx+1);
        if(check(x))
        {
            temp.push_back(x);
    fun(s,res,temp,i+1);
        temp.pop_back();
        }
    }


return ;
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string>temp;
        fun(s,res,temp,0);
        return res;
    }
};