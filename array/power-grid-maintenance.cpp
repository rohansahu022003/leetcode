class Solution {
public:
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        vector<vector<int>>adj(c+1);

        for(auto C: connections){
            int u=C[0];
            int v=C[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>online(c+1,1);
        vector<int>ans;
        
        

        for(auto q: queries){
            int check=INT_MAX;
            if(q[0]==1 && online[q[1]]==1)ans.push_back(q[1]);
            else if(q[0]==2)online[q[1]]=0;
            else if(q[0]==1 && online[q[1]]==0){
                queue<int>Q;
                vector<int>vis(c+1,0);
                Q.push(q[1]);
                vis[q[1]]=1;
                while(!Q.empty()){
                    int p=Q.front();
                    Q.pop();
                    for(auto it:adj[p]){
                        if(!vis[it]){
                            vis[it]=1;
                        Q.push(it);
                        if(online[it]==1 && check>it ){
                            check=it;
                        }
                        }

                    }
                }
                if(check==INT_MAX)ans.push_back(-1);
                else ans.push_back(check);

            }
        }
        return ans;
        
    }
};