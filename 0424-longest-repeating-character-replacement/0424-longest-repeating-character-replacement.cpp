class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>cap;
        int low=0,maxx=0;
        int n=s.size();
        int res=0;
        for(int high=0;high<n;high++)
        {
            cap[s[high]]++;
            int maxx=max(maxx,cap[s[high]]);
            int len=high-low+1;
            int diff=len-maxx;
            while(diff>k){
                cap[s[low]]--;
                if(cap[s[low]]==0) cap.erase(s[low]);
                low++;
             maxx=max(maxx,cap[s[high]]);
             len=high-low+1;
             diff=len-maxx;

            }
            if(diff<=k)
            {
                res=max(res,high-low+1);              
            }
        }
        return res;
    }
};