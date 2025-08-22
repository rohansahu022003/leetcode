class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<int>vis(v,0);
        queue<int>q;

        int provisions=0;
        vector<vector<int>>adj(v);

        for(int i=0; i<v; i++){
            for(int j=0; j<v; j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

       for(int i=0; i<v; i++){ 
        q.push(i);
        if(!vis[i]){
        while(!q.empty()){
            
            int currentnode=q.front();
            q.pop();
            for(auto it : adj[currentnode]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it); 
                }
                
            }
        
        }
        provisions++;
        }

        

    }
    return provisions;
    }
};