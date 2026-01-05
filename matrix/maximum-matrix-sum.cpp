class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int ans=0;
        vector<int>negative;
int lowest=INT_MAX;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                
                if(matrix[i][j]<=0)negative.push_back(matrix[i][j]);
                else{
                    lowest=min(lowest, matrix[i][j]);
                    ans+=matrix[i][j];
                } 
            }
        }
        int n=negative.size();
sort(negative.begin(), negative.end());
        if(n%2==0){
            for(int i=0; i<n; i++){
                ans+=abs(negative[i]);
            }
        }
    else{
        for(int i=0; i<n-1; i++)ans+=abs(negative[i]);
        if(abs(negative[n-1])<=lowest)ans+=negative[n-1];
        else{
            ans+=abs(negative[n-1]);
            ans-=2*lowest;
        }
    }
  
    return ans;
    }
};