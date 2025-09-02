class Solution {
    private:
   static bool cmp(vector<int>p, vector<int>q){
    return (p[0]==q[0]?p[1]<q[1]:p[0]>q[0]);
   }
public:
    int numberOfPairs(vector<vector<int>>& points) {
       sort(points.begin(), points.end(),cmp);
       int count=0;
       for(int i=0; i<points.size()-1; i++){
        int y=INT_MAX;
        for(int j=i+1; j<points.size(); j++){
           if(points[j][1]>=points[i][1] && y>points[j][1]){
                count++;
                y=points[j][1];
            
            }
            
           }
        }
       
       return count;
    }
};