class Solution {
public:
    int reverse(int x) {
        if(x<=INT_MIN && x>=INT_MAX){
            return 0;
        }
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
            n=n*10+digit;

        }
        if(x<0)return -(n);
        return n;
    }
};