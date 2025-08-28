class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int count=0;
        int i=0;
        while(i<n){
            for(int j=0; j<n; j++){
                if(fruits[i]<=baskets[j]){
                    count++;
                    baskets[j]=-1;
                    break;

                }

            }
            i++;
        }
        return fruits.size()-count;
    }
};