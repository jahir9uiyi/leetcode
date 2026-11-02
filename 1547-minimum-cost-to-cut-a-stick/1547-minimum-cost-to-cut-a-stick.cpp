
class Solution {
public:
    int fun(vector<int>& cut, int i, int j,
            vector<vector<int>>& dp)
    {
        if(i > j) return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        int res = INT_MAX;
        int cost = cut[j+1] - cut[i-1];

        for(int k=i; k<=j; k++)
        {
            int r = cost + fun(cut,i,k-1,dp)
                         + fun(cut,k+1,j,dp);

            res = min(res,r);
        }

        return dp[i][j] = res;
    }

    int minCost(int n, vector<int>& arr) {

        vector<int> cut;
        cut.push_back(0);

        for(int x : arr)
            cut.push_back(x);

        cut.push_back(n);

        sort(cut.begin(),cut.end());

        int s = cut.size();

        vector<vector<int>> dp(s, vector<int>(s,-1));

        return fun(cut,1,s-2,dp);
    }
};
