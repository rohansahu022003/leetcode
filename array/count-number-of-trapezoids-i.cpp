class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,int>level;
int const mod=1e9+7;
        for(auto p:points){
            int i=p[1];
            level[i]++;
        }
        long long ans=0;
        long long sum=0;
        for(auto [p,t]:level){
            if(t<2)continue;
            int c=((t*(t-1))/2);
            ans+=sum*c;
            ans%=mod;
            sum+=c;
            sum%=mod;
        }
        return ans;
    }
};