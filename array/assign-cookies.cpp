class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       unordered_set<int>cookies(s.begin(), s.end());
int ans=0;
       for(int i=0 ; i<g.size(); i++){
        if(cookies.find(g[i])!=cookies.end()){
            cookies.erase(g[i]);
           ans++;

        }
       } 
       return ans;
    }
};