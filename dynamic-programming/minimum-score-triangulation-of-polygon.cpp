class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        sort(values.begin(),values.end());
        int ans=0;
        
        for(int i=2; i<values.size(); i++){
            int mul=values[0]*values[1];
            mul*=values[i];
            ans+=mul;
        }
        return ans;
    }
};