class Solution {
public:
    int minCost(string colors, vector<int>& n) {
        int ans=0;
        for(int i=0; i<colors.size()-1; i++){
            if(colors[i]==colors[i+1]){
                ans+=min(n[i],n[i+1]);

            }
        }
        return ans;
    }
};