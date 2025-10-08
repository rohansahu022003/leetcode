class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
           int n=spells.size();
           int j=potions.size()-1;
           vector<int>ans(n,0);
        for(int i=0; i<spells.size(); i++){
            for(int k=0; k<=j; k++){
                if(spells[i]*potions[k]>=success){
                    ans[i]=j-k+1;
                    break;
                }
                else if(spells[i]*potions[j]<success){
                    break;

                }
            }

        }
        return ans;
    }
};