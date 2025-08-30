class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>vis(n,vector<int>(n,0));
        using T=pair<int,pair<int,int>>;
        priority_queue<T,vector<T>,greater<T>>pq;
        int nod=grid[0][0];
        pq.push({nod,{0,0}});
        int drow[]={0,0,1,-1};
        int dcol[]={1,-1,0,0};
        int time=0;
        while(!pq.empty()){
            auto it=pq.top();
            int node=it.first;
            int row=it.second.first;
            int col=it.second.second;
            vis[row][col]=1;
            time=max(time,node);
            pq.pop();
            if(row==n-1 && col==n-1)break;

            for(int i=0; i<4; i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && !vis[nrow][ncol]){
                    int next=grid[nrow][ncol];
                    pq.push({next,{nrow,ncol}});

                }
            }

        }
        return time;
    }
};