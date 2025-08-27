class Solution {
private:
void dfs(int row,int col,int &maxlen, vector<vector<int>>& vis, bool turn,vector<int>& temp,int i,int j,vector<vector<int>>& grid){
    int n=grid.size();
    int m=grid[0].size();
    vis[row][col]=1;
    
    temp.push_back(grid[row][col]);
    maxlen=max(maxlen,(int)temp.size());
    
    int drow[]={1,1,-1,-1};
    int dcol[]={1,-1,1,-1};

    if(grid[row][col]==1){
        for(int i=0; i<4; i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==2){
                dfs(nrow,ncol,maxlen,vis,turn,temp,nrow-row,ncol-col,grid);
            }
        }
    }
    if(grid[row][col]==2){
    if(i==-1 && j==-1){
          if(row-1>=0 && col-1>=0 && grid[row-1][col-1]==0 && !vis[row-1][col-1]){
            dfs(row-1,col-1,maxlen,vis,turn,temp,-1,-1,grid);
        }
         if(row-1>=0 && col+1<m && grid[row-1][col+1]==0 && !vis[row-1][col+1] && turn==false){
            turn=true;
            dfs(row-1,col+1,maxlen,vis,turn,temp,-1,1,grid);
        }
    }
    else if(i==-1 && j==1){
         if(row-1>=0 && col+1<m && grid[row-1][col+1]==0 && !vis[row-1][col+1]){
            dfs(row-1,col+1,maxlen,vis,turn,temp,-1,1,grid);
        }
         if(row+1<n && col+1<m && grid[row+1][col+1]==0 && !vis[row+1][col+1] && turn==false){
            turn=true;
            dfs(row+1,col+1,maxlen,vis,turn,temp,1,1,grid);
        }
    }
    else if(i==1 && j==1){
         if(row+1<n && col+1<m && grid[row+1][col+1]==0 && !vis[row+1][col+1]){
            dfs(row+1,col+1,maxlen,vis,turn,temp,1,1,grid);
        }
         if(row+1<n && col-1>=0 && grid[row+1][col-1]==0 && !vis[row+1][col-1] && turn==false){
            turn=true;
            dfs(row+1,col-1,maxlen,vis,turn,temp,1,-1,grid);
        }
    }
    else if(i==1 && j==-1){
        if(row+1<n && col-1>=0 && grid[row+1][col-1]==0 && !vis[row+1][col-1]){
            dfs(row+1,col-1,maxlen,vis,turn,temp,1,-1,grid);
        }
        if(row-1>=0 && col-1>=0 && grid[row-1][col-1]==0 && !vis[row-1][col-1] && turn==false){
            turn=true;
            dfs(row-1,col-1,maxlen,vis,turn,temp,-1,-1,grid);
        }

    }
    }

    else if(grid[row][col]==0){
         if(i==-1 && j==-1){
          if(row-1>=0 && col-1>=0 && grid[row-1][col-1]==2 && !vis[row-1][col-1]){
            dfs(row-1,col-1,maxlen,vis,turn,temp,-1,-1,grid);
        }
         if(row-1>=0 && col+1<m && grid[row-1][col+1]==2 && !vis[row-1][col+1] && turn==false){
            turn=true;
            dfs(row-1,col+1,maxlen,vis,turn,temp,-1,1,grid);
        }
    }
    else if(i==-1 && j==1){
         if(row-1>=0 && col+1<m && grid[row-1][col+1]==2 && !vis[row-1][col+1]){
            dfs(row-1,col+1,maxlen,vis,turn,temp,-1,1,grid);
        }
         if(row+1<n && col+1<m && grid[row+1][col+1]==2 && !vis[row+1][col+1] && turn==false){
            turn=true;
            dfs(row+1,col+1,maxlen,vis,turn,temp,1,1,grid);
        }
    }
    else if(i==1 && j==1){
         if(row+1<n && col+1<m && grid[row+1][col+1]==2 && !vis[row+1][col+1]){
            dfs(row+1,col+1,maxlen,vis,turn,temp,1,1,grid);
        }
         if(row+1<n && col-1>=0 && grid[row+1][col-1]==2 && !vis[row+1][col-1] && turn==false){
            turn=true;
            dfs(row+1,col-1,maxlen,vis,turn,temp,1,-1,grid);
        }
    }
    else if(i==1 && j==-1){
        if(row+1<n && col-1>=0 && grid[row+1][col-1]==2 && !vis[row+1][col-1]){
            dfs(row+1,col-1,maxlen,vis,turn,temp,1,-1,grid);
        }
         if(row-1>=0 && col-1>=0 && grid[row-1][col-1]==2 && !vis[row-1][col-1] && turn==false){
            turn=true;
            dfs(row-1,col-1,maxlen,vis,turn,temp,-1,-1,grid);
        }

    }
    }
    
   temp.pop_back();
   vis[row][col]=0;

      
    
}

public:
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        int maxlen=0;
       
       

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    bool turn=false;
                    vector<vector<int>>vis(n,vector<int>(m,0));
                    vector<int>temp;
                    dfs(i,j,maxlen,vis,turn,temp,0,0,grid);
                }
            }
        }
        return maxlen;

    }
};