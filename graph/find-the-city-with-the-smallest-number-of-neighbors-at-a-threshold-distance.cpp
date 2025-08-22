class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int,int>>>adj(n);

        for(auto e : edges){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        
        vector<int>cities(n,0);

        using T=pair<int,int>;
        priority_queue<T,vector<T>,greater<T>>q;

        for(int i=0; i<n;i++){
            // vector<int>vis(n,0);
            vector<int>dist(n,INT_MAX);
            q.push({0,i});
            // vis[i]=1;
            dist[i]=0;
            while(!q.empty()){
                int node=q.top().second;
                int distance=q.top().first;
                q.pop();

                for(auto it: adj[node]){
                    int next=it.first;
                    int newdist=it.second;
                     
                    if( newdist+distance<dist[next] && newdist+distance<=distanceThreshold){
                        q.push({newdist+distance,next});
                        // vis[next]=1;
                        dist[next]=newdist+distance;
                    }
                }
            }
            int reachable=0;
            for(int j=0; j<n;j++){
                if(i!=j && dist[j]<=distanceThreshold){
                    reachable++;
                }
            }
            cities[i]=reachable;
        }
int ans, minreach=INT_MAX;
        for(int i=0; i<n; i++){
           if (cities[i]<=minreach){
            minreach=cities[i];
            ans=i;
            }
        }

        return ans;

        
    }
};