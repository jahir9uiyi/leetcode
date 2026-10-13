class Solution {
public:
void fun(vector<string>&res,string &temp,int open,int close, int n)
{
    if(open==n && close==n)
    {
        res.push_back(temp);
        return;
    }
    
        
    if(open<n)
    {
        temp.push_back('(');
        fun(res,temp,open+1,close,n);
        temp.pop_back();
    }
    if(close<open)
    {
        temp.push_back(')');
        fun(res,temp,open,close+1,n);
        temp.pop_back();
    }
        // fun(res,temp,open+1,close,n);
        // fun(res,temp,open,close+1,n);
    return ;
}
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string temp;
        fun(res,temp,0,0,n);
        return res;
    }
};