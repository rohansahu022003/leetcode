class disjointsets{
    vector<int>parent,size;
    public:
    disjointsets(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0; i<=n; i++){
            parent[i]=i;
        }

    }

    int fup(int node){
        if(node==parent[node])return node;
        return parent[node]=fup(parent[node]);
    }

    void unionbysize(int u, int v){
        int up_u=fup(u);
        int up_v=fup(v);
        if(up_u==up_v)return;
        else if(size[up_u]>size[up_v]){
            parent[up_v]=up_u;
            size[up_u]+=size[up_v];

        }
        else{
            parent[up_u]=up_v;
            size[up_v]+=size[up_u];
        }
    }
    int getsize(int node){
        return size[fup(node)];
    }
};

class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
       int drow[]={0,0,1,-1};
       int dcol[]={1,-1,0,0};
        int n=grid.size();
         disjointsets ds(n*n);

        for(int i=0; i<n;i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                        for(int k=0; k<4; k++){
                            int nrow=i+drow[k];
                            int ncol=j+dcol[k];
                            if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && grid[nrow][ncol]==1){
                                    int node=i*n+j;
                                    int next=nrow*n+ncol;
                                    if(ds.fup(node)!=ds.fup(next)){
                                        ds.unionbysize(node,next);
                                    }

                                
                            }
                        }
                    
                }

            }
        }
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n;j++){
                if(grid[i][j]==0){
                    unordered_set<int>seen;
                    int newsize=1;
                    for(int ind=0; ind<4; ind++){
                        int nrow=i+drow[ind];
                        int ncol=j+dcol[ind];
                         if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && grid[nrow][ncol]==1){
                            int ultimateparent= ds.fup(nrow*n+ncol);
                            if(seen.insert(ultimateparent).second){
                                newsize+=ds.getsize(ultimateparent);
                            }
                         }
                         ans=max(ans,newsize);
                    }

                }
            }
        }
        if(ans==0){
            ans=ds.getsize(0);
            // for(int i=0; i<n; i++){
            //     for(int j=0; j<n; j++){
            //         if(grid[i][j]==1){
            //             int node=i*n+j;
            //             ans=ds.getsize(0);
            //         }
            //     }
            // }
        }
        return  ans;
        
    }
};