class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=prices.size();

        long long k=1;

        for(int i=0; i<prices.size()-1; i++){
            if(prices[i]-prices[i+1]==1){
                ans+=k;
                k++;
            }
            else{
                k=1;
            }
        }
        return ans;
    }
};