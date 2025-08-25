class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int n=mat.size();
        int m=mat[0].size();
        int direction=1;

        int row=0,col=0;

        for(int i=0; i<n*m; i++){
            ans.emplace_back(mat[row][col]);

            if(direction==1){
                if(col==m-1){
                    row=row+1;
                    direction=-1;
                }
                else if(row==0){
                    col=col+1;
                    direction=-1;
                }
                else{
                    row=row-1;
                    col=col+1;
                }
                }
                else{
                    if(row==n-1){
                        col=col+1;
                        direction=1;
                    }
                    else if(col==0){
                        row+=1;
                        direction=1;
                    }
                    else{
                        row=row+1;
                        col=col-1;
                    }
                }
            }
        
        return ans;
    }
};