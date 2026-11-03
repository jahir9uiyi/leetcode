class Solution {
public:
    int encrypt(int num) {
        int temp = num, m = 0;
        while (temp > 0) {
            int d = temp % 10;
            if (d > m)
                m = d;
            temp /= 10;
        }
        int res = 0, p = 1;
        while (num > 0) {
            res += m * p;
            p *= 10;
            num /= 10;
        }
        return res;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (auto x : nums) {
            sum += encrypt(x);
        }
        // encrypt();
        return sum;
    }
};