class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int count=0;
        int i=0;
        sort(baskets.begin(), baskets.end());
        while(i<n){
            if(fruits[i]<=baskets[n/2]){
                for(int j=0; j<=n/2; j++){
                if(fruits[i]<=baskets[j]){
                    count++;
                    baskets[j]=-1;
                    break;

                }


                }  
            }
            else{
                for(int j=n/2+1; j<n; j++){
                if(fruits[i]<=baskets[j]){
                    count++;
                    baskets[j]=-1;
                    break;

            }
                }
            }
            i++;
        }
        return fruits.size()-count;
    }
};