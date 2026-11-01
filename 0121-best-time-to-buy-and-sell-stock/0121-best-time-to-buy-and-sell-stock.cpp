class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int k = 2;

        vector<vector<int>> dp(n+1, vector<int>(k+1, 0));

        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<=k; j++)
            {
                if(j==0)
                    dp[i][j]=0;

                if(j==2)
                {
                    int c1 = dp[i+1][j-1] - arr[i];
                    int c2 = dp[i+1][j];

                    dp[i][j] = max(c1,c2);
                }

                if(j==1)
                {
                    int c1 = dp[i+1][j-1] + arr[i];
                    int c2 = dp[i+1][j];

                    dp[i][j] = max(c1,c2);
                }
            }
        }

        return dp[0][k];
    }
};