class Solution {
public:
    int mySqrt(int x) {
       if(x<2)return 1;

       int i=2;
       while(i*i<=x){
        i++;
       }
       return i-1;
    }
};