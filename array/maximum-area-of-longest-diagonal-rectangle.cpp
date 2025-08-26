class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int l,b,area;
        float diagonal=0;

        for(auto it: dimensions){
            float li=it[0];
            float bi=it[1];
            float root=sqrt((li*li) + (bi*bi));
            if(root>diagonal){
                diagonal=root;
                l=li;
                b=bi;
            }
    }
    return l*b;
    }
};