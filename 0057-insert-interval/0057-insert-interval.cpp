class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        a.push_back(b);
        vector<vector<int>> res;
        sort(a.begin(),a.end());
        int s1=a[0][0];
        int e1=a[0][1];
        int s2;
        int e2;
        for(int i=1;i<a.size();i++)
        {
            s2=a[i][0];
            e2=a[i][1];
            if(e1>=s2){
                s1=s1;
                e1=max(e1,e2);
                continue;
            }
            res.push_back({s1,e1});
            s1=s2;
            e1=e2;
        }
        res.push_back({s1,e1});
        return res;
    }
};