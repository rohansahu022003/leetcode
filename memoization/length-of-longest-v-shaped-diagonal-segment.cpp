class Solution {
    const int dirs[4][2]={{-1,-1},{-1,1},{1,1},{1,-1}};
    inline bool inb(int r,int c,int n,int m){return r>=0&&r<n&&c>=0&&c<m;}

    inline pair<int,int> cw(int dx,int dy){ return {dy,-dx}; }

    int dfs(int r,int c,int dx,int dy,bool turn,
            vector<vector<vector<vector<int>>>>& dp,
            vector<vector<int>>& g){
        int n=g.size(), m=g[0].size();
        int t=turn?1:0;

        int dirId=-1;
        for(int d=0;d<4;d++) if(dirs[d][0]==dx && dirs[d][1]==dy) dirId=d;

        if(dp[r][c][dirId][t]!=-1) return dp[r][c][dirId][t];

      
        int expected;
        if(g[r][c]==1) expected=2;
        else if(g[r][c]==2) expected=0;
        else expected=2; 

        int best=1;

        
        int nr=r+dx, nc=c+dy;
        if(inb(nr,nc,n,m) && g[nr][nc]==expected){
            best=max(best,1+dfs(nr,nc,dx,dy,turn,dp,g));
        }
      
        if(!turn){
            auto [tx,ty]=cw(dx,dy);
            int nr2=r+tx, nc2=c+ty;
            if(inb(nr2,nc2,n,m) && g[nr2][nc2]==expected){
                best=max(best,1+dfs(nr2,nc2,tx,ty,true,dp,g));
            }
        }
        return dp[r][c][dirId][t]=best;
    }

public:
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int ans=0;

        
        vector<vector<vector<vector<int>>>> dp(
            n, vector<vector<vector<int>>>(
                m, vector<vector<int>>(4, vector<int>(2,-1))
            )
        );

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans = max(ans, 1); 
                    for(int d=0;d<4;d++){
                        int nr=i+dirs[d][0], nc=j+dirs[d][1];
                        if(inb(nr,nc,n,m) && grid[nr][nc]==2){
                            ans=max(ans,1+dfs(nr,nc,dirs[d][0],dirs[d][1],false,dp,grid));
                        }
                    }
                }
            }
        }
        return ans;
    }
};