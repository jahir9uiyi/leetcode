class Solution {
public:
    int maxProfit(int k, vector<int>& arr) {
        k=k*2;
         int n = arr.size();
       

        vector<vector<int>> dp(n+1, vector<int>(k+1, 0));

        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<=k; j++)
            {
                if(j==0)
                   {
                    continue;
                   }

                if(j%2==0)
                {
                    int c1 = dp[i+1][j-1] - arr[i];
                    int c2 = dp[i+1][j];

                    dp[i][j] = max(c1,c2);
                }

               else
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