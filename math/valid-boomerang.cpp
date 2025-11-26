class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        double m=(double(points[1][1])-points[0][1])/(double(points[1][0])-points[0][0]);
        double n=(double(points[2][1])-points[1][1])/(double(points[2][0])-points[1][0]);
        set<vector<int>>st;
        for(auto p:points)st.insert(p);
        if(st.size()<=2)return false;
        if(points[0][0]==points[1][0] && points[1][0]==points[2][0])return false;
        if(points[0][1]==points[1][1] && points[1][1]==points[2][1])return false;
        return m!=n;
    }
};