class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<pair<int,int>>freq;

        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size();j++){
                if(mat[i][j]==1)freq.push_back({i,j});
            }
        }
int ans=0;
          for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size();j++){
               if(mat[i][j]==1){
                bool flag=true;
                for(int k=0; k<freq.size(); k++){
                    int n=freq[k].first;
                    int m=freq[k].second;
                    if(i==n && j==m)continue;
                    if(i==n || j==m){
                        flag=false;
                        break;
                    }
                }
                if(flag==true)ans++;
               }
            }
        }
        return ans;
    }
};