class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int v=connections.size();
        if(v<n-1)return -1;

        vector<vector<int>>adj(n);

        for(auto c : connections){
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(c[0]);
        }
        queue<int>q;
        vector<int>vis(n,0);
        int component=0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
            q.push(i);
            component++;
            }
            while(!q.empty()){
                int node=q.front();
                vis[node]=1;
                q.pop();
                for(auto it: adj[node]){
                    if(!vis[it]){
                        q.push(it);
                    }
                }
            }
        
        }
        return component-1;
    }
};