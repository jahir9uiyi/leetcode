class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>>res;
        int i=0;
        int j=0;
        int n=a.size();
        int m=b.size();
        while(i<n && j<m)
        {
        int st1=a[i][0];
        int en1=a[i][1];
        int st2=b[j][0];
        int en2=b[j][1];
            if(st1<=st2)
            {
                if(en1>=st2){
                    int s=max(st1,st2);
                    int e=min(en1,en2);
                    res.push_back({s,e});
                }
            }
            else{
                if(en2>=st1)
                {
                    int s=max(st1,st2);
                    int e=min(en1,en2);
                    res.push_back({s,e});
                }
            }
            if(en1<=en2)
            {
                i++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};