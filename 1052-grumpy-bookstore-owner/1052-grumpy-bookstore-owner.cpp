class Solution {
public:
    int maxSatisfied(vector<int>& cus, vector<int>& grum, int minutes) {
        
        int ans = 0;

        // Already satisfied customers
        for(int i = 0; i < cus.size(); i++)
        {
            if(grum[i] == 1) {
                continue;
            }

            ans += cus[i];
        }

        // Sliding window
        int extra = 0;
        int maxExtra = 0;

        for(int i = 0; i < cus.size(); i++)
        {
            if(grum[i] == 1)
                extra += cus[i];

            if(i >= minutes)
            {
                if(grum[i-minutes] == 1)
                    extra -= cus[i-minutes];
            }

            maxExtra = max(maxExtra, extra);
        }

        return ans + maxExtra;
    }
};