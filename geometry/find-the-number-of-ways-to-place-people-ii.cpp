class Solution {
public:
    int numberOfPairs(vector<vector<int>>& p) {
        sort(p.begin(), p.end(), [](const auto &a, const auto &b )
        {return a[0]==b[0]?a[1]>b[1]: a[0]<b[0];});

        int count=0;
        
        for(int i=0; i<p.size(); i++){
            int a=p[i][1];
            int y=INT_MIN;
            for(int j=i+1; j<p.size(); j++){
                int b=p[j][1];
                if(a>=b && b>y){
                    count++;
                    y=b;
                }
            }
        }
        return count;
    }
};