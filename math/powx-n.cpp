class Solution {
public:
    double myPow(double x, int n) {
       double ans=1;
       if(n==0)return 1;

       if(n>0)ans=pow(x,n);
       else{
        long long N=-n;
        ans=1/pow(x,N);
       }
return ans;
    }
};