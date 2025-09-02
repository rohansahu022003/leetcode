class Solution {
    private:
    bool nopoint(int i,int j,vector<vector<int>>& points){
        for(int k=i+1; k<j; k++){
            {
            if(points[i][0] <= points[k][0] && points[k][0] <= points[j][0] &&
   points[i][1] >= points[k][1] && points[k][1] >= points[j][1]){
                return false;
            }
            }
        }
        return true;

    }
public:
    int numberOfPairs(vector<vector<int>>& points) {
       sort(points.begin(), points.end());
       int count=0;
       for(int i=0; i<points.size()-1; i++){
        for(int j=i+1; j<points.size(); j++){
           if(points[i][1]>=points[j][1]){
           
            if(nopoint(i,j,points)){
                count++;
            }
            }
            
           }
        }
       
       return count;
    }
};