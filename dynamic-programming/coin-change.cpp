class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
       int ans=0;
       sort(coins.begin(), coins.end());
       for(int i=coins.size()-1; i>=0;i--){
        while(amount-coins[i]>=0){
            amount-=coins[i];
            ans++;
        }
       }
       if(amount)return -1;
       return ans;
    }
};