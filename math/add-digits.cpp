class Solution {
public:
    int addDigits(int num) {
        string s=to_string(num);
       int n;
        while(s.size()!=1){
              n=0;
            for(char c:s){
             n+=c-'0';
            }
            s=to_string(n);
        }
        return n;
    }
};