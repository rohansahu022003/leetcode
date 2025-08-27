class disjointsets{
    vector<int>parent, size;
    public:
    disjointsets(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0; i<=n; i++)parent[i]=i;

    }

    int fup(int node){
        if(node==parent[node])return node;
        return parent[node]=fup(parent[node]);
    }

    void unionbysize(int u,int v){
       int up_u=fup(u);
        int up_v=fup(v);
        if(up_u==up_v)return;
        if(size[up_u]>size[up_v]){
            parent[up_v]=up_u;
            size[up_u]+=size[up_v];
        }
        else{
            parent[up_u]=up_v;
            size[up_v]+=size[up_u];
        }
            }
};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n=accounts.size();
        disjointsets ds(n);
        unordered_map<string,int>mapmailnode;

        for(int i=0; i<n; i++){
            for(int j=1; j<accounts[i].size(); j++){
                string detail=accounts[i][j];
                if(mapmailnode.find(detail)==mapmailnode.end()){
                    mapmailnode[detail]=i;
                }
                else{
                    ds.unionbysize(i,mapmailnode[detail]);
                }
            }
        }

        vector<vector<string>> mergemail(n);
        for(auto it: mapmailnode){
            string s=it.first;
            int node=ds.fup(it.second);
            mergemail[node].push_back(s);
        }

        vector<vector<string>>ans;

        for(int i=0; i<n; i++){
            if(mergemail[i].size()==0)continue;
            else(sort(mergemail[i].begin(),mergemail[i].end()));
            vector<string>temp;
            temp.push_back(accounts[i][0]);
            for(auto it:mergemail[i]){
                temp.push_back(it);
            }
             ans.push_back(temp);
        }
       
        return ans;

        
    }
};