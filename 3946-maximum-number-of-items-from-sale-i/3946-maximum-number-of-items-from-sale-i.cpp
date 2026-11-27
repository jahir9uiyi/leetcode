class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();
        int minPrice = INT_MAX;
        int ans = 0;

        vector<int> dp(budget + 1, 0);

        for (int i = 0; i < n; i++) {
            int g = 0;

            for (int j = 0; j < n; j++) {
                if (j != i && items[j][0] % items[i][0] == 0) {
                    g++;
                }
            }

            int price = items[i][1];
            minPrice = min(minPrice, price);

            for (int b = budget; b >= price; b--) {
                dp[b] = max(dp[b], dp[b - price] + 1 + g);
            }
        }

        for (int b = 0; b <= budget; b++) {
            ans = max(ans, dp[b] + (budget - b) / minPrice);
        }

        return ans;
    }
};