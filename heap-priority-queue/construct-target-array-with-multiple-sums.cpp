class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int>pq;
        int sum=0;
        for(auto t:target){
         pq.push(t);
         sum+=t;
        }

        while(pq.top()!=1){
            int curr=pq.top();
            pq.pop();
            if(sum-curr==1)return true;

            int x=curr%(sum-curr);
            sum=sum-curr+x;

            if(x==0 || curr==x)return false;
           else pq.push(x);

        }
        return true;
    }
};