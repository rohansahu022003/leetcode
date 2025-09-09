class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        int mod=1e9+7;

        queue<pair<int,int>>q;
        q.push({1,1});

        for(int i=1; i<=n; i++){
            int size=q.size();
            while(size){
                int forgetday=q.front().first;
                int delayday=q.front().second;
                q.pop();
            if(forgetday<=forget){
                if(delayday>delay){
                    q.push({2,2});
                }
                q.push({forgetday+1,delayday+1});
            }
            size--;
            }

        }
        return q.size()%mod;

    }
};