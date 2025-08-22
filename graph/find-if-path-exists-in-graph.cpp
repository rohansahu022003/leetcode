class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);
        queue<int>q;
        
        for(auto e : edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);

        }

        q.push(source);
        vis[source]=1;

        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it: adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
        if(!vis[destination]) return false;
        return true;
    }
};