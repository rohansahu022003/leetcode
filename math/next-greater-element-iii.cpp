class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int l=s.size();
int ans=-1;
        for(int i=l-1; i>0 ; i--){
         int a=s[i]-'0';
         int b=s[i-1]-'0';
         if(a>b){
          swap(s[i],s[i-1]);
         long long num=stoll(s);
         if(num<INT_MAX){
            ans=num;
            break;
         }
         }
         
        }
    return ans;
    }
};