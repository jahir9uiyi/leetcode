class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>res(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<=i;j++)
            {
                res[i]+=nums[j];
            }
        }
        return res;
    }
};