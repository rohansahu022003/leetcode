class Solution {
public:
    int minNumberOfSemesters(int n, vector<vector<int>>& relations, int k) {
      
       vector<vector<int>>adj(n+1);
vector<int>indegree(n+1,0);
       for(auto r: relations){
        int u=r[0];
        int v=r[1];
        adj[u].push_back(v);
        indegree[v]++;
       }
       queue<int>q;
       int available=0;
vector<int>vis(n+1,0);
       for(int i=1; i<=n; i++){
       
        if(indegree[i]==0){
            q.push(i);
            available++;
            vis[i]=1;
        }
       }
int ans=0;
       while(!q.empty()){
        int take=min(k,available);
        if(take>0){
        available-=take;
ans++;
        }
        int parent=q.front();
        q.pop();
        for(auto it: adj[parent] ){
             indegree[it]--;
            if(indegree[it]==0 && !vis[it]){
                q.push(it);
                available++;
                vis[it]=1;
            }
        }
       }

       return ans;

    }
};