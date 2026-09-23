class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int low=0;
        int high=0;
        int res=INT_MAX;
        int n=arr.size();
        int sum=0;
        while(high<n){
            sum+=arr[high];
            while(sum>=target){
                res=min(res,high-low+1);
                sum=sum-arr[low];
                low++;
            }
            high++;
        }
        return res==INT_MAX? 0:res;
    }
};