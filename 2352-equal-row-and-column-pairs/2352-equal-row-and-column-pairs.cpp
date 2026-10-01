class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0,n=grid.size();
        int m=grid[0].size();
        map<vector<int>,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[grid[i]]++;
        }
        for(int j=0;j<m;j++)
        {   vector<int>cmm;
            for(int i=0;i<n;i++)
            {
                cmm.push_back(grid[i][j]);
            }
            ans+=mp[cmm];
        }
        return ans;
    }
};