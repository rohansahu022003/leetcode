class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int result=triangle[0][0];
        int n=triangle.size();
        int l=0;

        for(int i=1; i<n;i++){
          auto  minel=min_element(triangle[i].begin()+l,triangle[i].begin()+l+2);
          result+=*minel;
          l=distance(triangle[i].begin(), minel);
         
        }
        return result;
    }
};