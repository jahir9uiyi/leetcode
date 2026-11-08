class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {

        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            idle;

        priority_queue<pair<long long, int>, vector<pair<long long, int>>,
                       greater<pair<long long, int>>>
            busy;

        int n = servers.size();
        int m = tasks.size();

        for (int i = 0; i < n; i++) {
            idle.push({servers[i], i});
        }

        vector<int> ans(m);
        long long time = 0;

        for (int i = 0; i < m; i++) {

            time = max(time, (long long)i);

            while (!busy.empty() && busy.top().first <= time) {
                int idx = busy.top().second;
                busy.pop();

                idle.push({servers[idx], idx});
            }

            if (idle.empty()) {
                time = busy.top().first;

                while (!busy.empty() && busy.top().first <= time) {
                    int idx = busy.top().second;
                    busy.pop();

                    idle.push({servers[idx], idx});
                }
            }

            int idx = idle.top().second;
            idle.pop();

            ans[i] = idx;

            busy.push({time + tasks[i], idx});
        }

        return ans;
    }
};