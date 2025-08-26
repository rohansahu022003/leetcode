class disjointsets{
    vector<int>parent,size;
public:    
    disjointsets(int n){
        parent.resize(n);
        size.resize(n,1);
        for(int i=0; i<n;i++){
            parent[i]=i;
        }
    }

    int fup(int node){
        if(node==parent[node])return node;
        return parent[node]=fup(parent[node]);
    }

    void unionbysize(int u,int v){
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

    void noc(int& count,int n){
        for(int i=0; i<n; i++){
        if(i==parent[i])count++;
        }
    }


};


class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        int m=stones.size();
        int numberofstones=0;
        // if(n>m)
        disjointsets ds(n);
        // else disjointsets ds(m);
        
        for(auto s: stones){
            numberofstones++;
        int x=s[0];
        int y=s[1];
        ds.unionbysize(x,y);
        }

        int components=0;
    //  if(n>m)
     ds.noc(components,n);
// else ds.noc(components,m);
        return numberofstones-components

        
    }
};