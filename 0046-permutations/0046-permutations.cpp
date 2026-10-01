class Solution {
public:
void fun(vector<int>& nums,vector<vector<int>>& res,vector<int>&temp,int idx,int n)
{
    if(idx==n)
    {
        res.push_back(nums);
    }
    for(int i=idx;i<n;i++)
    {
        swap(nums[i],nums[idx]);
        fun(nums,res,temp,idx+1,n);
        swap(nums[i],nums[idx]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>temp;
        int n=nums.size();
        fun(nums,res,temp,0,n);
        return res;
    }
};