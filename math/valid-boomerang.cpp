class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        double m=(double(points[1][1])-points[0][1])/(double(points[1][0])-points[0][0]);
        double n=(double(points[2][1])-points[1][1])/(double(points[2][0])-points[1][0]);

        return m!=n;
    }
};