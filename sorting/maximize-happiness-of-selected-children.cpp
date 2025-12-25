class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());

        int ans=0;
        int t=0;
        int n=happiness.size()-1;
        for(int i=0; i<k;i++){
           if(t<=happiness[n]) ans+=happiness[n--]-t;
            t++;
        }

        return ans;
    }
};