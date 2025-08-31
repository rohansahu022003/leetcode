class Solution {
    int timer=1;
    private:
    void dfs(int node, int parent, vector<vector<int>>& adj , vector<int>& tm, vector<int>&lowtm, vector<vector<int>>& bridges, vector<int>& vis){
vis[node]=1;
tm[node]=lowtm[node]=timer;
timer++;

for(auto it: adj[node]){
    if(it==parent)continue;
    if(!vis[it]){
        dfs(it,node,adj,tm,lowtm,bridges,vis);
        lowtm[node]=min(lowtm[node],lowtm[it]);

        if(lowtm[it]>tm[node]){
            bridges.push_back({node,it});
        }

    }
    else{
        lowtm[node]=min(lowtm[it],lowtm[node]);
    }
}
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>adj(n);

        for(auto c: connections){
            int u=c[0];
            int v=c[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int>tm(n);
        vector<int>lowtm(n);
        vector<vector<int>>bridges;
        vector<int>vis(n,0);

        dfs(0,-1,adj,tm,lowtm,bridges,vis);

        return bridges;

        
    }
};