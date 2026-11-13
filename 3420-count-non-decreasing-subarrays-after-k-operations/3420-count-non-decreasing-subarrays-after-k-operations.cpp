class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& A, long long k) {

        reverse(A.begin(), A.end());

        long long ans = 0;
        deque<int> dq;

        int n = A.size();
        int left = 0;

        for (int right = 0; right < n; right++) {

            while (!dq.empty() && A[dq.back()] < A[right]) {

                int idx = dq.back();
                dq.pop_back();

                int prev = dq.empty() ? left - 1 : dq.back();

                k -= 1LL * (idx - prev) * (A[right] - A[idx]);
            }

            dq.push_back(right);

            while (k < 0) {

                k += A[dq.front()] - A[left];

                if (dq.front() == left) {
                    dq.pop_front();
                }

                left++;
            }

            ans += right - left + 1;
        }

        return ans;
    }
};