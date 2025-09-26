class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int count=0;
        int sign=1;
        int i=0;
        int n=s.size();
       while(i<n && s[i]==' '){
        i++;
       }
       if(s[i]=='+')i++;
       else if(s[i]=='-'){
        sign=-1;
        i++;
       }
       
      
       while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            ans = ans * 10 + digit;
            
            if (sign * ans <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * ans >= INT_MAX) {
                return INT_MAX;
            }
            
            i++;
        }

        
        return static_cast<int>(sign*ans);
    }
};