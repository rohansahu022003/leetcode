class Solution {
public:
    int numSub(string s) {
        int count=0;
int ans=0;
        for(auto c:s){
            if(c=='0'){
                while(count){
                 ans+=count;
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