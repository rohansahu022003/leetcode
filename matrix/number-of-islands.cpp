class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int drow[]={1,-1,0,0};
        int dcol[]={0,0,1,-1};

        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        int islandcount=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    q.push({i,j});
                    vis[i][j]=1;
                    islandcount++;
                 while(!q.empty()){
                        int row=q.front().first;
                        int col=q.front().second;
                        q.pop();
                        for(int k=0; k<4; k++){
                            int nrow=row+drow[k];
                            int ncol=col+dcol[k];
                            if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                                vis[nrow][ncol]=1;
                                q.push({nrow,ncol});
                                
                                
                            }
                        }

                    }
                }
            }
        }
        return islandcount;
    }
};