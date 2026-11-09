#define pi pair<int,int>

class Solution {
public:
    static const int N = 1e5;
    int seg[4*N+50];

    void update(int node, int l, int r, int idx, int val) {
        if(l == r) {
            seg[node] = val;
            return;
        }

        int mid = (l+r)/2;

        if(idx <= mid)
            update(node*2, l, mid, idx, val);
        else
            update(node*2+1, mid+1, r, idx, val);

        seg[node] = min(seg[node*2], seg[node*2+1]);
    }

    int query(int node, int l, int r, int ql, int qr) {
        if(r < ql || l > qr)
            return INT_MAX;

        if(l >= ql && r <= qr)
            return seg[node];

        int mid = (l+r)/2;

        return min(
            query(node*2, l, mid, ql, qr),
            query(node*2+1, mid+1, r, ql, qr)
        );
    }

    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        int n = arrival.size();

        vector<int> cnt(k, 0);

        for(int i = 0; i < k; i++) {
            update(1, 0, k-1, i, i);
        }

        priority_queue<pi, vector<pi>, greater<pi>> pq;

        for(int i = 0; i < n; i++) {

            int t = arrival[i];
            while(!pq.empty() && pq.top().first <= t) {
                int server = pq.top().second;
                pq.pop();

                update(1, 0, k-1, server, server);
            }

            int idx = i % k;

            int server = query(1, 0, k-1, idx, k-1);

            if(server == INT_MAX) {
                server = query(1, 0, k-1, 0, idx-1);
            }
if(server == INT_MAX) {
                continue;
            }

            cnt[server]++;

            update(1, 0, k-1, server, INT_MAX);
            pq.push({t + load[i], server});
        }
        int mx = *max_element(cnt.begin(), cnt.end());

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            if(cnt[i] == mx) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};