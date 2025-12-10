class Solution {
    public:
    int fact(long long c){
        int const mod=1e9+7;
        if(c==1)return 1;
        return (c*fact(c-1))%mod;
    }
public:
    int countPermutations(vector<int>& complexity) {
        int unlocked=complexity[0];
        int count=0;
        int n=complexity.size();
        for(int i=1; i<n; i++){
            if(unlocked<complexity[i])count++;
        }
        if(count<n-1)return 0;
        int ans=fact(count);

        return ans;
    }
};