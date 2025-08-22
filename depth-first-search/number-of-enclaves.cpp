class Solution {
private:
void dfs(int n,int m, vector<vector<int>>& grid, vector<vector<int>>& vis, int row, int col, int& count){
    int drow[]={1,-1,0,0};
    int dcol[]{0,0,1,-1};
    vis[row][col]=1;
    count--;

    for(int i=0; i<4; i++){
        int nrow=row+drow[i];
        int ncol=col+dcol[i];
        if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
            dfs(n,m,grid,vis,nrow,ncol,count);
        }
    }
}
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>>vis(n,vector(m,0));
        int count=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1)count++;
            }
        }

        for(int i=0; i<n; i++){
            if(grid[i][0]==1 && !vis[i][0] ){
                
                    dfs(n,m,grid,vis,i,0,count);
                }
            if(grid[i][m-1]==1 && !vis[i][m-1]){
                dfs(n,m,grid,vis,i,m-1,count);
            }
            
        }
        for(int j=0; j<m; j++){
            if(grid[0][j]== 1 && !vis[0][j]){
                dfs(n,m,grid,vis,0,j,count);
            }
            if(grid[n-1][j]==1 && !vis[n-1][j]){
                dfs(n,m,grid,vis,n-1,j,count);
            }
        }
        return count;
    }
};