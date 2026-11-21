class Solution {
public:
    bool canJump(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            if(res<i) return 0;
            res=max(res,nums[i]+i);
        }
        return 1;
    }
};