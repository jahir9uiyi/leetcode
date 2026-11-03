class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);

        }
        int move=0;
        for(auto x:nums)
        {
            move+=maxi-x;
        }
        cout<<move;
        return move;
    }
};