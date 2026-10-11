class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> ans;
        for(auto s:strs)
        {
            string key=s;
            sort(key.begin(),key.end());
            ans[key].push_back(s);
        }
        for(auto p: ans)
        {
            res.push_back(p.second);
        }
return res;
    }
};