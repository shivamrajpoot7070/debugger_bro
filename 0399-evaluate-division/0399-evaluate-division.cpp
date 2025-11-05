#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations,
                                vector<double>& values,
                                vector<vector<string>>& queries) {
        unordered_map<string, vector<pair<string, double>>> adj;

        for (int i = 0; i < equations.size(); i++) {
            string u = equations[i][0], v = equations[i][1];
            double wt = values[i];
            adj[u].push_back({v, wt});
            adj[v].push_back({u, 1.0 / wt});
        }

        vector<double> ans;
        for (auto& q : queries) {
            string u = q[0], v = q[1];
            if (!adj.count(u) || !adj.count(v)) ans.push_back(-1.0);
            else if (u == v) ans.push_back(1.0);
            else ans.push_back(bfs(u, v, adj));
        }
        return ans;
    }

private:
    double bfs(string start, string end,
               unordered_map<string, vector<pair<string, double>>>& adj) {
        queue<pair<string, double>> q;
        unordered_set<string> vis;
        q.push({start, 1.0});
        vis.insert(start);

        while (!q.empty()) {
            auto [node, prod] = q.front(); q.pop();
            if (node == end) return prod;

            for (auto& [nei, wt] : adj[node]) {
                if (!vis.count(nei)) {
                    vis.insert(nei);
                    q.push({nei, prod * wt});
                }
            }
        }
        return -1.0;
    }
};