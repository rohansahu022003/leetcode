class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=baskets.size();
        int k=0;
        vector<int>vis(n,0);
        for(int i=0; i<fruits.size(); i++){
            for (int j=0; j<n; j++){
                if(fruits[i]<=baskets[j] && !vis[j]){
                    k++;
                    vis[j]=1;
                    break;
                    
                }
            }
        }
        return fruits.size()-k;
    }
};