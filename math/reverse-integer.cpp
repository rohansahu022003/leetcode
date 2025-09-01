class Solution {
public:
    int reverse(int x) {
        int y;
        if(x<0)
        {y=-(x);
        }
        else if(x>0) {
            y=x;
        }
        
       int n=0;
        while(y>0){
            int digit=y%10;
            y/=10;
            if(n>=INT_MAX/10 || n<=INT_MIN/10){
                return 0;
            }
            n=n*10+digit;

        }
        if(x<0)return -(n);
        return n;
    }
};