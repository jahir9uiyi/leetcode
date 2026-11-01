class Solution {
public:
int fun(vector<int>& arr,int i, int n,int k,vector<vector<int>>&dp){
    if(i==n) return 0;
    if(k==0) return 0;
    if(dp[i][k]!=-1) return dp[i][k];
    if(k==2) // buy
    {
        int c1=fun(arr,i+1,n,k-1,dp)-arr[i];
        int c2=fun(arr,i+1,n,k,dp);
        return dp[i][k]=max(c1,c2);
    }
    if(k==1) // sell
    {
        int c1=fun(arr,i+1,n,k+1,dp)+arr[i];
        int c2=fun(arr,i+1,n,k,dp);
        return dp[i][k]=max(c1,c2);
    }
    return dp[i][k];
}
    int maxProfit(vector<int>& arr) {
         int n=arr.size();
      int k=2;
       vector<vector<int>>dp(n+1);
       for(int i=0;i<=n;i++)
       {
        vector<int>t(k+1,-1);
        dp[i]=t;
       }
        int gain=fun(arr,0,n,k,dp);
        return max(gain,0);
    }
};