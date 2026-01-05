class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int ans=0;
        vector<int>negative;

        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j]<0)negative.push_back(matrix[i][j]);
                else ans+=matrix[i][j];
            }
        }
sort(negative.begin(), negative.end());
        if(negative.size()%2==0){
            for(int i=0; i<negative.size(); i++){
                ans+=abs(negative[i]);
            }
        }
    else{
        for(int i=0; i<negative.size()-1; i++)ans+=abs(negative[i]);
        ans+=negative[negative.size()-1];
    }
  
    return ans;
    }
};