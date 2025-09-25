class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int result=0;
        int n=triangle.size();

        for(int i=0; i<n;i++){
            result+=*min_element(triangle[i].begin(),triangle[i].end());
        }
        return result;
    }
};