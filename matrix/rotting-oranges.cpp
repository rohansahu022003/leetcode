class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        int freshcount=0;
        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2){
                    vis[i][j]=2;
                    q.push({{i,j},0});
                }
                
                else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1){
                    freshcount++;
                }
            }
        }
        int drow[]={-1,1,0,0};
        int dcol[]={0,0,-1,1};
        int nrow;
        int ncol;
         int tm=0;
    
        while(!q.empty()){

        int row=q.front().first.first;
        int col=q.front().first.second;
        int t=q.front().second;
        q.pop();
       
        tm=max(tm,t);
        for(int i=0; i<4; i++){
            nrow=row+drow[i];
            ncol=col+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                vis[nrow][ncol]=2;
                q.push({{nrow,ncol},t+1});
                freshcount--;
            }
        }

        }

       if(freshcount!=0){
        return -1;
       }

       else return tm;

    }
};