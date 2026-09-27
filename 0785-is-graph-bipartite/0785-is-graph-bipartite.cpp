class Solution {
public:
bool res=true;
void dfs(vector<vector<int>>& arr,int node,int c,vector<int>&colors){
    colors[node]=c;
    for(int j=0;j<arr[node].size();j++)
    {
        int neigh=arr[node][j];
        if(colors[neigh]!=-1 && colors[neigh]==c)
        {
            res=false;
        }
        if(colors[neigh]==-1)
        {
            dfs(arr,neigh,1-c,colors);
        }
    }
    return;
}
    bool isBipartite(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<int>colors(n,-1);
    for(int i=0;i<n;i++)
    {
        if(colors[i]==-1){
            dfs(arr,i,0,colors);
        }
    }
    return res;
    }
};