class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int row=matrix.size();
       int col= row>0?matrix[0].size():0;
       vector<vector<int>>ans(row,vector<int>(col));

       for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            ans[j][(row-1-i)]=matrix[i][j];
        }
       } 
       matrix=ans;
    }
};