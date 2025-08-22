class Solution {
private:

void dfs(int n, int m, vector<vector<char>>& board,int row, int col){
    int drow[]={1,-1,0,0};
    int dcol[]={0,0,1,-1};
    board[row][col]='#';

    for(int i=0 ;i<4; i++){
        int nrow=row+drow[i];
        int ncol=col+dcol[i];
        if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && board[nrow][ncol]=='O'){
            dfs(n,m,board,nrow,ncol);

        }
    }
}

public:
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        for(int i=0; i<n; i++){
            
                if( board[i][0]=='O'){
                    dfs(n,m, board, i,0);  
            }
            if(board[i][m-1]=='O')dfs(n,m,board,i,m-1);
        }
        for(int j=0; j<m;j++){
            if(board[0][j]=='O')dfs(n,m,board,0,j);
            if(board[n-1][j]=='O')dfs(n,m,board,n-1,j);
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j]=='O') board[i][j]='X';
                else if( board[i][j]=='#')board[i][j]='O';
            }
        }
    }
};