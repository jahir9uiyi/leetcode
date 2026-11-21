class Solution {
public:
    int jump(vector<int>& nums) {
        int reach=0;
        int last=0;
        int res=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            reach=max(reach,nums[i]+i);
            if(i==last){
                last=reach;
                res++;
            }
        }
        return res;
    }
};