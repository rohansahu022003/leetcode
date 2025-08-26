class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long l=0,b=0,maxarea=0;
        long long diagonal=0;

        for(auto it: dimensions){
            int li=it[0];
            int bi=it[1];
            int root=((li*li) + (bi*bi));
            long long area=li*bi;
            if(root>diagonal){
                diagonal=root;
                l=li;
                b=bi;
                maxarea=area;
            }
            else if(root==diagonal){
                maxarea=max(maxarea,area);
            }
    }
    return maxarea;
    }
};