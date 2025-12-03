class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);

        int xo=0;
        int i=0;
        int j=s.size()-1;
        while(i<s.size()){
         xo=s[i++]^s[j--];
        }
        return (xo==0?true:false);
    }
};