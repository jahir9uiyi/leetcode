class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxe=nums[0];
        int mine=nums[0];
        int ans=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            int v1=maxe*nums[i];
            int v2=mine*nums[i];
            int v3=nums[i];
            maxe=max({v1,v2,v3});
            mine=min({v1,v2,v3});
            ans=max(ans,max(maxe,mine));
        }
        return ans;
    }
};