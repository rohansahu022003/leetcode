class Solution {
public:
    double myPow(double x, int n) {
        if(x==0)return double(0);
       else if(x==1)return double(1);
        if(n==0)return 1;
        double ans=1;

        if(n<0){
            x=1/x;
            n=-n;
        }
        while(n>0){
            if(n%2==1)ans*=x;
            x*=x;
            n/=2;
        }
return ans;
    }
};