class Solution {
public:
    int numWaterBottles(int n, int k) {
        int ans=0;
        int carry=0;
        int empty=n;
        while(empty>=k){
            ans+=n;
            empty=n+carry;
            carry=empty%k;
            n=empty/k;

        }
        return ans;
    }
};