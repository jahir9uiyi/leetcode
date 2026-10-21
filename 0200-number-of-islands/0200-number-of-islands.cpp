class Solution {
public:
int x[4]={0,0,-1,1};
int y[4]={1,-1,0,0};
bool valid(int n,int m,int i,int j){
    
    if(i<0 || i>=n || j<0 || j>=m) return 0;
return 1;
}
void bfs(vector<vector<char>>& grid,int n, int m, int i, int j,vector<vector<bool>>&vis){
    vis[i][j]=1;
    for(int k=0;k<4;k++)
    {
        int r=i+x[k];
        int c=j+y[k];
        if(valid(n,m,r,c) && grid[r][c]=='1' && vis[r][c]==0){
            bfs(grid,n,m,r,c,vis);
        }
    }
    return;
}
    int numIslands(vector<vector<char>>& grid) {
        int i,j;
        int n=grid.size();
        int m=grid[0].size();
        int res=0;
        vector<vector<bool>>vis(n);
        for(int i=0;i<n;i++)
        {
            vector<bool>t(m,0);
            vis[i]=t;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && vis[i][j]==0)
                {
                    bfs(grid,n,m,i,j,vis);
                    res++;
                }
            }
        }
        return res;
    }
};