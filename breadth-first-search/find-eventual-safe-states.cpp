class Solution {
    private:
    bool dfs(int node, vector<int>&vis, vector<vector<int>>& graph, vector<int>& pathvis,vector<int>& safe){
        vis[node]=1;
        pathvis[node]=1;
       

        for(auto it: graph[node]){
            if(!vis[it]){
              if ( dfs(it,vis,graph,pathvis,safe)) return true;
            }
            else if(pathvis[it]){
              safe[node]=0;
              return true;
            }
        }

        pathvis[node]=0;
        safe[node]=1;
        return false;
        
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>safe(n,0), vis(n,0), pathvis(n,0), ans;
      
        for(int i=0; i<n; i++){
         
           dfs(i,vis,graph,pathvis,safe);
            
        }
        for(int i=0; i<n;i++){
            if(safe[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};