class Solution {
public:
bool res=true;
void dfs(vector<vector<int>>& arr,int node,int c,vector<int>&color){
    color[node]=c;
    for(int i=0;i<arr[node].size();i++)
    {
        int neigh=arr[node][i];
        if(color[neigh]==c)
        {
            res=false;
        }
        if(color[neigh]==-1)
        {
            dfs(arr,neigh,1-c,color);
        }
    }
    return;
}
    bool isBipartite(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<int>color(n,-1);

        for(int i=0;i<n;i++)
        {
            if(color[i]==-1){
                dfs(arr,i,0,color);
            }
        }
return res;

    }
};