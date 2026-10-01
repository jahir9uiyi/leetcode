class Solution {
public:
void fun(vector<int>&given,vector<int>&temp,vector<vector<int>>&res,int idx,int k)
{

    if(temp.size()==k){
        res.push_back(temp);
        return;
    }
    if(idx==given.size()) return ;
    
    fun(given,temp,res,idx+1,k);
    
    temp.push_back(given[idx]);
    fun(given,temp,res,idx+1,k);
    temp.pop_back();


    return;
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>given;
        for(int i=1;i<=n;i++)
        {
            given.push_back(i);
        }
        vector<int>temp;
        vector<vector<int>>res;
        fun(given,temp,res,0,k);
        return res;
    }
};