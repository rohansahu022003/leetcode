class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int k=strs[0].size();
        int n=strs.size();
        int ans=0;
        for(int i=0; i<k;i++){
            if(ans!=i)break;
            for(int j=1; j<n; j++){
             
             if(strs[j-1][i]>strs[j][i]){
               ans++;
               break;
             }
            }
        }
        return ans;
    }
};