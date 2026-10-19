class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        int low = 0;
        int high = nums.size() - 1;
        int first = -1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                if (nums[mid] == target)
                    first = mid;

                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        int low1 = 0;
        int high1 = nums.size() - 1;
        // first
        while (low1 <= high1) {
            int mid = low1 + (high1 - low1) / 2;
            if (nums[mid] <= target) {
                if (nums[mid] == target)
                    last = mid;

                low1 = mid + 1;
            } else {
                high1 = mid - 1;
            }
        }
        res[0] = first;
        res[1] = last;
        // res.push_back(last);
        return res;
    }
};