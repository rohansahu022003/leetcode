class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,int>>pq;

        for(int i=0; i<classes.size(); i++){
            int pass=classes[i][0], total=classes[i][1];
            double gain= (double)(pass+1)/(total+1) -(double)pass/total;
            pq.push({gain,i});
        }
        while(extraStudents--){
            auto it= pq.top();
            int i =it.second;
            pq.pop();
             classes[i][0]++;
                classes[i][1]++;
                double newgain= (double)(classes[i][0]+1)/(classes[i][1]+1) - (double)classes[i][0]/classes[i][1];
               
                pq.push({newgain,i});
        }
        double sum=0;

        for(auto c: classes){
            sum+=(double)c[0]/c[1];
        }
        return sum/classes.size();
    }
};