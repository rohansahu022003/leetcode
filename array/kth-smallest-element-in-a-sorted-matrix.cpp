class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>arr;
        for(int i=0;i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(), arr.end());

        int ans=arr[k-1];
        return ans;
    }
};