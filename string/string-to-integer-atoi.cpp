class Solution {
public:
    long long myAtoi(string s) {
        long long ans=0;
        int count=0;
        for(int i=0; i<s.size();i++){
            if(s[i]==' ')continue;
            if(s[i]=='-' && count!=0)break;
            else if(s[i]=='-')continue;
            else if(isalpha(s[i]))break;
            else{
                count++;
                 ans=ans*10+s[i]-'0';
            }
        }
        if(s.find('-')!=string::npos)return -ans;
        return ans;
    }
};