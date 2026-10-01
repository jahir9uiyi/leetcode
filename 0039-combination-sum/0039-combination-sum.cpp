class Solution {
public:
void fun(vector<vector<int>>&res,vector<int>&temp,int sum, int idx,int target,vector<int>& arr)
{
    if(idx==arr.size()) return;
    if(sum==target)
    {
        res.push_back(temp);
        return;
    }
    fun(res,temp,sum,idx+1,target,arr);

    if(sum+arr[idx]<=target)
    {
        sum+=arr[idx];
        temp.push_back(arr[idx]);
        fun(res,temp,sum,idx,target,arr);
        temp.pop_back();
        sum-=arr[idx];
    }
    return;
}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int>temp;
        vector<vector<int>>res;
        int sum=0;
        fun(res,temp,sum,0,target,arr);
        return res;
    }
};