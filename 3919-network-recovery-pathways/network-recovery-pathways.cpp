class Solution {
public:
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n = online.size();
        vector<int> unique_costs;
        for (const auto& edge : edges) {
            unique_costs.push_back(edge[2]);
        }
        sort(unique_costs.begin(), unique_costs.end());
        unique_costs.erase(unique(unique_costs.begin(), unique_costs.end()), unique_costs.end());

        int low = 0, high = unique_costs.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int min_allowed_cost = unique_costs[mid];

            if (isValid(n, edges, online, k, min_allowed_cost)) {
                ans = min_allowed_cost;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }

private:
    bool isValid(int n, const vector<vector<int>>& edges, const vector<bool>& online, long long k, int min_cost) {
        vector<vector<pair<int, int>>> adj(n);
        vector<int> in_degree(n, 0);

        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int cost = edge[2];

            if (cost >= min_cost && online[u] && online[v]) {
                adj[u].push_back({v, cost});
                in_degree[v]++;
            }
        }

        vector<long long> dp(n, -1);
        dp[0] = 0;

        queue<int> q;
        for (int i = 0; i < n; ++i) {
            if (in_degree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            if (dp[u] != -1) {
                for (const auto& neighbor : adj[u]) {
                    int v = neighbor.first;
                    int cost = neighbor.second;

                    if (dp[v] == -1 || dp[u] + cost < dp[v]) {
                        dp[v] = dp[u] + cost;
                    }
                }
            }

            for (const auto& neighbor : adj[u]) {
                int v = neighbor.first;
                in_degree[v]--;
                if (in_degree[v] == 0) {
                    q.push(v);
                }
            }
        }

        return dp[n - 1] != -1 && dp[n - 1] <= k;
    }
};