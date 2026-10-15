class Solution {
public:
int ans=0;
    int sumCounts(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            unordered_set<int>st;
            for(int j=i;j<nums.size();j++)
            {
                st.insert(nums[j]);
                int ct=st.size();
                ans+=ct*ct;
            }

        }
        return ans;
    }
};