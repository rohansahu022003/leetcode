class Solution {
    public:
    int factorial(int i){
        int res=1;
        for(int j=2; j<=i; j++){
            res*=j;
        }
        return res;
    }
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,int>level;
int const mod=10e9+7;
        for(auto p:points){
            int i=p[1];
            level[i]++;
        }
        int ans=0;
        vector<int>pairs;
        for(auto l:level){
            if(l.second<2)continue;
            int i=factorial(l.second)/(factorial(2)*factorial(l.second-2));
            pairs.push_back(i);
        }

        for(int i=0; i<pairs.size(); i++){
            for(int j=i+1; j<pairs.size(); j++){
                ans=ans+(pairs[i]*pairs[j])%mod;
            }
        }
        return ans;
    }
};