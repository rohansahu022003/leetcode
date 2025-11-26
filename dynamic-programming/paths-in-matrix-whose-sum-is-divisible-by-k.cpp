class Solution {
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        queue<pair<int,pair<int,int>>>path;
        int n=grid.size();
        int m=grid[0].size();
        path.push({grid[0][0],{0,0}});
        int ans=0;
        int const mod=7+10e9;
        int dx[]={1,0};
        int dy[]={0,1};
        while(!path.empty()){
            auto it=path.front();
            int sum=it.first;
            int i=it.second.first;
            int j=it.second.second;
            path.pop();
            if(i==n-1 && j==m-1){
                if(sum%k==0)ans=(ans+1)%mod;
                continue;
            }

            for(int k=0; k<2; k++){
                int nrow=i+dy[k],ncol=j+dx[k];
                if(nrow<n && ncol<m){
                    path.push({sum+grid[nrow][ncol],{nrow,ncol}});
                }
            }
        }

        return ans;

    }
};