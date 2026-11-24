class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++)
        {
        long long g=0;
        long long l=1;
            long long pro=1;
            for(int j=i;j<n;j++)
            {
                pro*=nums[j];
                if (pro > 25200) break;   // can never equal g*l again
                g=gcd(g,(long long)nums[j]);
                l=lcm(l,(long long)nums[j]);
            if(pro==g*l){
                res=max(res,j-i+1);
            }
            }
        }
        return res;
    }
};