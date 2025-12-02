class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       unordered_map<int,int>tic;
       queue<pair<int,int>>q;

       for(int i=0; i<tickets.size(); i++){
        tic[i]=tickets[i];
        q.push({i,tickets[i]});
       } 
int ans=0;
       while(tic.count(k)){
      auto [i,remain]=q.front();
      q.pop();
      tic[i]--;
      remain--;
      ans++;
      if(tic[i]==0){
        tic.erase(i);
      }
      else{
        q.push({i,remain});
      }
       }

       return ans;
    }
};