class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        for (auto &f : flights) {
            adj[f[0]].push_back({f[1], f[2]});
        }

        using T = pair<int, pair<int,int>>; // {cost, {node, steps}}
        priority_queue<T, vector<T>, greater<T>> pq;

        pq.push({0, {src, 0}});

        vector<vector<int>> dist(n, vector<int>(k+2, INT_MAX)); 
        dist[src][0] = 0;

        while (!pq.empty()) {
            auto [cost, p] = pq.top(); pq.pop();
            int node = p.first;
            int steps = p.second;

            if (node == dst) return cost;
            if (steps > k) continue; 

            for (auto &[nxt, w] : adj[node]) {
                int newCost = cost + w;
                if (newCost < dist[nxt][steps+1]) {
                    dist[nxt][steps+1] = newCost;
                    pq.push({newCost, {nxt, steps+1}});
                }
            }
        }

        return -1;
    }
};
