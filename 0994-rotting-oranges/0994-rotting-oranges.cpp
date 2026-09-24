class Solution {
public:
bool valid(int i,int j, int n, int m)
{
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}
int x[4]={1,-1,0,0};
int y[4]={0,0,-1,1};
    int orangesRotting(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        int time=0;
        int fresh=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==1){
                    fresh++;
                }
                else{
                    if(arr[i][j]==2)
                    {
                        q.push({i,j});
                        arr[i][j]=-2;
                    }
                }
            }
        }
        while(!q.empty() && fresh>0)
        {
            time++;
            int s=q.size();
            while(s--){
                pair<int,int>p=q.front();
                q.pop();
                int r=p.first;
                int c=p.second;
                for(int k=0;k<4;k++)
                {
                    int row=r+x[k];
                    int col=c+y[k];
                    if(valid(row,col,n,m) && arr[row][col]==1)
                    {
                        q.push({row,col});
                        arr[row][col]=-2;
                        fresh--;
                    }
                }
            }
        }
        if(fresh>0) return -1;
        return time;
    }
};