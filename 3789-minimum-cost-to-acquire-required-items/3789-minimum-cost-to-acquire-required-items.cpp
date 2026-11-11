class Solution {
public:
    long long minimumCost(int cost1, int cost2, int both, int need1, int need2) {
        long long ans=0;
    if(both<(cost1+cost2))
    {
        ans=1LL * max(need1,need2) * both;
    }
    else{
    ans = 1LL * need1 * cost1 + 1LL * need2 * cost2; 
    }
    long long a= 1LL* min(need1,need2) *both +1LL *abs(need1-need2) * (need1>need2? cost1:cost2);
ans=min(ans,a);

    return ans;
    }
};