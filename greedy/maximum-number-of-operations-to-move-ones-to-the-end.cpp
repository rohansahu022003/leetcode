class Solution {
public:
    int maxOperations(string s) {
       int cnt1=(s[0]=='1'),ans=0;
       for(int i=1; i<s.size(); i++){
        if(s[i]=='1')cnt1++;
        else if(s[i-1]=='1'){
            ans+=cnt1;
        }
       } 
       return ans;
    }
};