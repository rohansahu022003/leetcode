class Solution {
public:
    int divide(int dividend, int divisor) {
        int ans=dividend/divisor;
        if(ans>INT_MAX-1)return INT_MAX-1;
        if(ans<INT_MIN)return INT_MIN;
        return ans;
    }
};