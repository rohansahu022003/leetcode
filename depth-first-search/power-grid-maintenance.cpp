class DSU{
    public:
    vector<int>parent;
    vector<int>size;
    vector<set<int>>comp;
    
    private:
    ds(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        comp.resize(n+1);
        for(int i=1 i<=n;i++){
            parent[i]=i;
            comp[i]=i;
        }
    }

    int find(int a){
        if(parent[a]==a)return a;
        return parent[a]=find(parent[a]);
    }
    void unite(int a,intb){
        ulpa=find(a);
        ulpb=find(b);
        if(ulpa==ulpb)return;
        if(size[ulpa]>size[ulpb]){
            parent[ulpb]=ulpa;
            size[ulpa]+=size[ulpb];
            comp[ulpa].insert(ulpb.begin(),ulpb.end());
            comp[ulpb].clear;
        }
        else{
            parent[ulpa]=ulpb;
            size[ulpb]+=size[ulpa];
            comp[ulpb].insert(ulpa.begin(), ulpa.end());
            comp[ulpa].clear;
        }

    }
void remove(x){
    int root=find(x);
    comp[root].erase(x);
}
int station(x){
    int root=find(x);
    if(comp[root].empty())return -1;
    return *comp[root].begin()
}
};

class Solution {
public:
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        DSU ds(c);
       for(auto C: connections){
        int u=C[0]; int v=C[1];
        ds.unite(u,v);

       }
vector<int>ans;
       for(auto q:queries){
        int type=q[0];
        int node=q[1];
        if(type==2)ds.remove(node);
        else int res=ds.station(node);
        ans.push_back(res);
       }

       return ans; 
    }
};