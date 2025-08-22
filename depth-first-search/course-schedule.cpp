class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adjs(numCourses);
        vector<int>indegree(numCourses);
        queue<int>q;
        vector<int>bfs;
        
        for(auto p : prerequisites){
            int u=p[1];
            int v=p[0];
            adjs[u].push_back(v);
            indegree[v]++;

        }
        for(int i=0; i<numCourses; i++){
            if(indegree[i]==0){
                q.push(i);
            }

        }

        while(!q.empty()){
            int node=q.front();
            bfs.push_back(node);
            q.pop();
            for(auto it : adjs[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }

        if(bfs.size()!=numCourses) return false;
        return true;

    }
};