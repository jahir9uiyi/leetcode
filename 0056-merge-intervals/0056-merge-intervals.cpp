class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
     vector<vector<int>>res;
     sort(arr.begin(),arr.end());
     int st1=arr[0][0];
     int e1=arr[0][1];
     for(int i=0;i<arr.size();i++)
     {
        int st2=arr[i][0];
        int e2=arr[i][1];
        if(e1>=st2){
            st1=st1;
            e1=max(e1,e2);
            continue;
        }
        res.push_back({st1,e1});
        st1=st2;
        e1=e2;
     }   
     res.push_back({st1,e1});
     return res;
    }
};