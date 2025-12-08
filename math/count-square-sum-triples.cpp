class Solution {
public:
    int countTriples(int n) {
        int ans=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                double a=i*i + j*j;
                double c=sqrt(a);
                if(c==int(c) && c<=n)ans++;
            }
        }
        return ans;
    }
};