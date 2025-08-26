class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int l,b,area;
        int diagonal=0;

        for(auto it: dimensions){
            int li=it[0];
            int bi=it[1];
            int root=sqrt((li*li) + (bi*bi));
            if(root>diagonal){
                diagonal=root;
                l=li;
                b=bi;
            }
    }
    return l*b;
    }
};