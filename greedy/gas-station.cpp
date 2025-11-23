class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans=-1;
       
        int remain=0;
        int n=gas.size();
        for(int i=0; i<gas.size(); i++){
          remain+=gas[i];
          int j=i;
          int k=0;
          while(remain){
            remain-=cost[j];
            k++;
            if(remain<0)break;
            j=(j+1)%n;
            remain+=gas[j];
            
          }
          if(k==n){
            ans=i;
            break;
          }
        }
        return ans;
    }
};