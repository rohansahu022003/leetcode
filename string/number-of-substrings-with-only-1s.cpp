class Solution {
public:
    int numSub(string s) {
        int count=0;
long long ans=0;
int const mod=7+1e9;
        for(auto c:s){
            if(c=='0'){
                while(count){
                 ans= (ans+count)%mod;
                 count--;
                }
            }
            else count++;
        }
        while(count){
            ans+=count;
            count--;
        }
        return ans;
    }
};