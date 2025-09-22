class Solution {
public:
    double myPow(double x, int n) {
        if(x==0)return double(0);
       else if(x==1)return double(1);
        if(n==0)return 1;
        double ans=1;

        if (n>0){
            for(double i=1; i<=n; i++){
                ans*=x;
            }
        }
        else {
            while(n){
                ans=ans/x;
               n++;
            }
        }
return ans;
    }
};