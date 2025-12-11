class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int,set<int>>x;
        unordered_map<int,set<int>>y;

        for(int i=0; i<buildings.size(); i++){
            int xi=buildings[i][0];
            int yi=buildings[i][1];
            x[xi].insert(yi);
            y[yi].insert(xi);
        }
int ans=0;
         for(int i=0; i<buildings.size(); i++){
            int xi=buildings[i][0];
            int yi=buildings[i][1];
           
           auto ity=x[xi].find(yi);
           auto itx=y[yi].find(xi);

           bool vertical=((ity!=x[xi].begin())&&(next(ity)!=x[xi].end()));
           bool horizontal=((itx!=y[yi].begin())&& (next(itx)!=y[yi].end()));

           if(vertical && horizontal)ans++;
    }
    return ans;
    }
};