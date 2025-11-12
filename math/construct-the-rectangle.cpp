class Solution {
public:
    vector<int> constructRectangle(int area) {
      int l;
      int w;
int dist=INT_MAX;
      for(int i=1; i<=area/2; i++){
        if(area%i==0){
           int j=area/i;
            if(abs(j-i)<dist){
                l=j;
                w=i;
                dist=j-i;
            }
        }
      }  
      return {l,w};
    }
};