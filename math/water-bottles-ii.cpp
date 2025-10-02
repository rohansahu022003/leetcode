class Solution {
public:
    int maxBottlesDrunk(int n, int k) {
        if(n<k)return n;
        int ans=0;
        int full=n;
        int p=0;
        while(full){
            ans+=full;
            full=0;
            p+=n;
            while(p>=k){
                p-=k;
                k++;
                full++;
                n=full;
            }
            

        }
        return ans;
    }
};