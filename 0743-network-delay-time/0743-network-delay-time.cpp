class Solution {
public:
    int networkDelayTime(vector<vector<int>>& arr, int n, int k) {
          int src=k-1;
          vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<arr.size();i++)
        {
            int s=arr[i][0];
            int d=arr[i][1];
            int w=arr[i][2];
            adj[s-1].push_back({d-1,w});
           
        }
          priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dist(n,INT_MAX);
    dist[src]=0;
    pq.push({0,src});
    while(!pq.empty())
    {
        pair<int,int>p=pq.top();
        pq.pop();
        int d=p.first;
        int node=p.second;
        if(d>dist[node]){
            continue;
        }
        for(int i=0;i<adj[node].size();i++)
        {
            int neigh=adj[node][i].first;
            int wt=adj[node][i].second;
            if(d+wt<dist[neigh])
            {
                dist[neigh]=wt+d;
                pq.push({d+wt,neigh});
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
            if(dist[i]==INT_MAX)
            {
                return -1;
            }
            ans=max(ans,dist[i]);
    }
    return ans;
    }
};