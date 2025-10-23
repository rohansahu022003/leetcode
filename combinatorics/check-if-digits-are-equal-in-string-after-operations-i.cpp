class Solution {
public:
    bool hasSameDigits(string s) {
        
        while(s.size()!=2){
            string snew="";
            for(int i=0; i<s.size()-1; i++){
                int sum= ((s[i]-'0')+(s[i+1]-'0'))%10;
                snew.push_back(sum+'0');
            }
            s=snew;
        }
       return (s[0]==s[1]);
    }
};