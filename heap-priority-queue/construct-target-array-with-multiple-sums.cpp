class Solution {
public:
    bool isPossible(vector<int>& target) {
        if(target.size()==1) return target[0]==1;
        priority_queue<int>pq;
        long long sum=0;
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