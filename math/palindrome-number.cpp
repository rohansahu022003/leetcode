class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }
        int check=x;
        int revnum=0;
        while(x!=0){
            int digit= x%10;

            if(revnum>INT_MAX/10 ||revnum<INT_MIN/10){
                return false;
            }
            revnum=(revnum*10)+digit;

            
            x=x/10;

        }
        if(revnum==check){
            return true;
        }
        return false;
        
    }
};