class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    long long sum=0;
    long long sqrsum=0;
    int row=grid.size();

    long long n=row*row;

    for(int i=0; i<row; i++){
        for(int j=0;j<row; j++){
            sum+=grid[i][j];
            sqrsum+=grid[i][j]*grid[i][j];
        }
    }

    long long sumr=(n*(n+1))/2;
    long long sqrsumr=(n*(n+1)*(2*n+1))/6;

    int diff=sumr-sum;
    int Sum=(sqrsumr-sqrsum)/diff;

    return {(Sum-diff)/2, (Sum+diff)/2};

    


    }
};