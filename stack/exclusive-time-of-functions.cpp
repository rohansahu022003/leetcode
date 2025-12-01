class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int>ans(n,0);
        stack<int>time;
        int prev=0;
        for(auto log: logs){
            int p1=log.find(":");
            int p2=log.find(":",p1+1);

            int id=stoi(log.substr(0,p1));
            int t=stoi(log.substr(p2+1));
            string type=log.substr(p1+1, p2-p1-1);

            if(type=="start"){
                if(!time.empty()){
                 ans[time.top()]+=t-prev;
                }
                time.push(id);
                prev=t;
            }
            else{
                ans[time.top()]+=t-prev+1;
                time.pop();
                prev=t+1;
            }
        }

        return ans;
    }
};