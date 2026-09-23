class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        int s1=arr[0][0];
        int e1=arr[0][1];
        int s2;
        int e2;
        for(int i=1;i<arr.size();i++)
        {
            s2=arr[i][0];
            e2=arr[i][1];
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