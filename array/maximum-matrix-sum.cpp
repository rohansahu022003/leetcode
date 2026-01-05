class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans=0;
        int negative=0;
long long lowest=INT_MAX;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                
                if(matrix[i][j]<=0)negative++;
               ans+=abs(matrix[i][j]);
               lowest=min(lowest, abs((long long)matrix[i][j]));
            
        }
        }
       if(negative%2==1)ans-=2*lowest;
    return ans;
    }
};