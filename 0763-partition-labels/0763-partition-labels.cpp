class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<int,int>lastseen;
        for(int i=0;i<s.size();i++)
        {
            lastseen[s[i]]=i;
        }
        vector<int>res;
       int i=0;
       while(i<s.size())
        {
            int x=i;
            int j=lastseen[s[i]];
            while(x<j)
            {
                j=max(j,lastseen[s[x]]);
                x++;
            }
            res.push_back(j-i+1);
            i=j+1;
        }
        return res;
    }
};