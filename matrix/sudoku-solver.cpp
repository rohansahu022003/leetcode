class Solution {
    private:
    bool solve(vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.'){
                    for(char d='1'; d<='9'; d++){
                       if( isvalid(d,i,j,board)){

                        board[i][j]=d;

                        if(solve(board))return true;

                        board[i][j]='.';
                    }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    private:
    bool isvalid(char c, int row, int col, vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            if(board[row][i]==c)return false;
            if(board[i][col]==c)return false;
            int subrow=3*(row/3)+i/3;
            int subcol=3*(col/3)+i%3;
            if(board[subrow][subcol]==c)return false;
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};