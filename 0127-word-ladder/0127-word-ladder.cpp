class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& word) {
        unordered_map<string,int>cap;
        int n=word.size();
        for(int i=0;i<n;i++)
        {
            cap[word[i]]=1;
        }
        if(cap.find(begin)==cap.end())
        {
            cap[begin]=1;
        }
        if(cap.find(end)==cap.end())
        {
            return 0;
        }
        queue<pair<string,int>>q;
        q.push({begin,1});
        cap.erase(begin);
        while(!q.empty())
        {
            pair<string,int>p=q.front();
            q.pop();
            string s=p.first;
            int val=p.second;
            if(s==end){
                return val;
            }
        
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            for(int j=97;j<=122;j++)
            {
                if(ch==j) continue;
                s[i]=j;
                if(cap.find(s)!=cap.end())
                {
                    q.push({s,val+1});
                    cap.erase(s);
                }
            }
            s[i]=ch;
        }
        }
return 0;
    }
};