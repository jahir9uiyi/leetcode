class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res=1;
        int in=1;
        int dec=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                in++;
                dec=1;
            }
            else if(nums[i]>nums[i+1]){
                dec++;
                in=1;
            }
            else{
                in=1;
                dec=1;
            }
            
            res=max(res,max(in,dec));
        }
        return res;
    }
};