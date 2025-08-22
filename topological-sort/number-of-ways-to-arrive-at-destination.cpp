class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>adj(n);

        for(auto r : roads){
            int u=r[0]; int v=r[1]; int w=r[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        using T=pair<long long,int>;
        priority_queue<T,vector<T>,greater<T>>q;
        vector<long long>distance(n,LLONG_MAX);
        vector<int>ways(n,0);

        q.push({0,0});
        distance[0]=0;
        ways[0]=1;
        int mod=(int)(1e9+7);
        while(!q.empty()){
            int node=q.top().second;
            long long dist=q.top().first;
            q.pop();

            for(auto it : adj[node]){
                int next=it.first;
                long long distnew=it.second;
                long long totaldist=distnew+dist;

                if(totaldist<distance[next]){
                    distance[next]=totaldist;
                    ways[next]=ways[node];
                    q.push({totaldist,next});
                }
                else if(totaldist==distance[next]){
                    ways[next]=(ways[next]+ways[node])% mod;
                }
            }
        }
        return ways[n-1]% mod;

    }
};