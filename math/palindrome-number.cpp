class Solution {
public:
    bool isPalindrome(int x) {
        int check=x;
      if(x<0)return false;
      int n=0;
      while(x){
        int d=x%10;
        if(n>INT_MAX/10 || n<INT_MIN/10)return false;
        n=n*10+d;
        x/=10; 
      }  
      if(n==check)return true;
      return false;
    }
};