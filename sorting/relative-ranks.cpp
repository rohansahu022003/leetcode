class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string>ans(n);
        priority_queue<pair<int,int>>pq;

        for(int i=0; i<score.size(); i++){
            pq.push({score[i],i});
        }
        int k=1;
        while(!pq.empty()){
            int i=pq.top().second;
            if(k==1)ans[i]="Gold Medal";
            else if(k==2)ans[i]="Silver Medal";
            else if(k==3)ans[i]="Bronze Medal";
            else{
                ans[i]=to_string(k);
            }
            k++;
            pq.pop();
        }
        return ans;
    }
};