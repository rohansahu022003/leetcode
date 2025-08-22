class Solution {
    private:
    bool dfs(int node,int c, vector<int>& color, vector<vector<int>>& graph){
       color[node]=c;
       for(auto it: graph[node]){
        if(color[it]==-1){
            if(!dfs(it,!c,color,graph)) return false;
        }
        else{
            if(color[it]==c) return false;
        }
       }
       return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
       int n=graph.size();
       vector<int>color(n,-1);
       bool bi=true;
       for(int i=0; i<n; i++){
        if(color[i]==-1){
           if(!dfs(i,0,color,graph)) return false;
        }
       }
      return bi;
       
    }
};