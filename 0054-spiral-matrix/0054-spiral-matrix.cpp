class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col= row>0? matrix[0].size():0;

        int left=0, top=0, right=col-1, bottom=row-1;
        vector<int>ans;
        int num = row*col;

        while(top<=bottom && left<=right){
            for(int i=left; i<=right; i++){
                ans.emplace_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom; i++ ){
                ans.emplace_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right; i>=left; i--){
               
              ans.emplace_back(matrix[bottom][i]);
            }
            }
            bottom--;
            if(left<=right){
            for(int i=bottom; i>=top; i--){
                ans.emplace_back(matrix[i][left]);
            }
            }
            left++;
        }
        return ans;
    }
};