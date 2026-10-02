class Solution {
public:
void fun(vector<string>&res,string &temp,int n,int open,int close){
    if(open==n && close==n){
        res.push_back(temp);
        return;
    }
    if(open<n){
        temp.push_back('(');
        fun(res,temp,n,open+1,close);
        temp.pop_back();
    }
    if(close<open){
        temp.push_back(')');
        fun(res,temp,n,open,close+1);
        temp.pop_back();
    }
return ;
}
    vector<string> generateParenthesis(int n) {
        string temp="";
        vector<string>res;
        fun(res,temp,n,0,0);
        return res;
    }
};