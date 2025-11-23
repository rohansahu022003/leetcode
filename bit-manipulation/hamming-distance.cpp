class Solution {
public:
    int hammingDistance(int x, int y) {
        int xo=x^y;
        int ans=0;
        while(xo){
           xo=xo&(xo-1);
           ans++; 
        }
        return ans;
    }
};