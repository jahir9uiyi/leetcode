class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mini=min(mini,nums[i]);
        }
        int move=0;
        for(auto x:nums)
        {
            move+=x-mini;
        }
        return move;
    }
};