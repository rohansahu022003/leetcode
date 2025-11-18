class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans;
        for(int i=0;i<rowIndex+1;i++){
            vector<int>I(i+1,1);
            for(int j=1;j<i;j++){
                I[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(I);
        }
        return ans[rowIndex];
    }
};