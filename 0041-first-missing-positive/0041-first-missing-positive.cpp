class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int res=1;
         sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==res){
            res++;
            }
            // else break;
        }
        return res;
    }
};