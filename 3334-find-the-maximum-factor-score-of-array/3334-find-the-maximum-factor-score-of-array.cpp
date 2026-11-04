class Solution {
public:
    long long maxScore(vector<int>& nums) {
        long long res = -1;
        vector<long long> ans;
          long long l = 1, g = 0;
        if (nums.size() == 1) {
            return 1LL * nums[0] * nums[0];
        }
         for(int x : nums) {
            l = lcm(l, (long long)x);
            g = gcd(g, (long long)x);
        }

        res = l * g;
        for (int i = 0; i < nums.size(); i++) {
            long long ans1 = 1;
            long long ans2 = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (j == i)
                    continue;
                ans1 = lcm(ans1, (long long)nums[j]);
                ans2 = gcd(ans2, (long long)nums[j]);
            }
            ans.push_back(ans1 * ans2);
        }
        for (int i = 0; i < ans.size(); i++) {
            res = max(res, ans[i]);
        }
        return res;
    }
};