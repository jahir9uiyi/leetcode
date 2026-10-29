class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int pro=1;
        int res=0;
        if(k<=1) return 0;
        // unordered_map<int,int>mp;
        int low=0;
        int high=0;
        while(high<n)
        {
            pro*=nums[high];
            while(pro>=k)
            {
                pro=pro/nums[low];
                low++;
            }
            res+=high-low+1;
            high++;
        }
    return res;
    }
};