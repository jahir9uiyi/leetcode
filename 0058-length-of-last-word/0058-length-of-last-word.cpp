class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        vector<string>res;
        while(ss>>word)
        {
            res.push_back(word);
        }
        string ans=res[res.size()-1];
        return ans.size();
    }
};