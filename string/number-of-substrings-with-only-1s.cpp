class Solution {
public:
    int numSub(string s) {
        int count=0;
int ans=0;
int const mod=7+1e9;
        for(auto c:s){
            if(c=='0')count=0;
            else count++;
            ans=(ans+count)%mod;
        }
        
        return ans;
    }
};