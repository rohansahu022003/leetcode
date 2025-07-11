class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minprice=INT_MAX;
        for(auto price: prices){
            minprice=min(minprice, price);
            profit=max(profit, price-minprice);
        }
        return profit;
    }
};