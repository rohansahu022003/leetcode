class Solution {
public:
    long long myAtoi(string s) {
        long long ans=0;
        for(int i=0; i<s.size();i++){
            if(s[i]==' ')continue;
            if(i>=1){
            else if(s[i]=='-' && isdigit(s[i-1]))break;
            }
            else if(s[i]=='-')continue;
            else if(isalpha(s[i]))break;
            else ans=ans*10+s[i]-'0';
        }
        if(s.find('-')!=string::npos)return -ans;
        return ans;
    }
};