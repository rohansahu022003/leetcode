class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,int>level;
int const mod=10e9+7;
        for(auto p:points){
            int i=p[1];
            level[i]++;
        }
        int ans=0;
        int sum=0;
        for(auto [p,t]:level){
            if(t<2)continue;
            int c=((t*(t-1))/2);
            ans=(ans+(sum*c))%mod;
            sum+=c;
        }
        return ans;
    }
};