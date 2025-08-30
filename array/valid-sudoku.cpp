class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>>row(9,vector<int>(10,0)),col(9,vector<int>(10,0)),box(9,vector<int>(10,0));

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.')continue;
                else{
                    int r=i;
                    int c=j;
                    int digit= board[i][j]-'0';
                    int b= (r/3)*3 + (c/3);
                    if(row[r][digit] || col[c][digit] || box[b][digit])return false;
                    else{
                        row[r][digit]=col[c][digit]=box[b][digit]=1;
                    }
                }
            }
        }
        return true;
    }
};