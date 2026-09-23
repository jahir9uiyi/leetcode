class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int low=0;
       int res=0;
       int n=s.size();
       unordered_map<char,int>cap;
       for(int high=0;high<n;high++)
       {
            cap[s[high]]++;
            int k=high-low+1;
            while(cap.size()<k)
            {
                cap[s[low]]--;
                if(cap[s[low]]==0) cap.erase(s[low]);
                low++;
            k=high-low+1;
            }
            if(cap.size()==k)
            {
                int len=high-low+1;
                res=max(res,len);
            }
            
       }

return res;
    }
};