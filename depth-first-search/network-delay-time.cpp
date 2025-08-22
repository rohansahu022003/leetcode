class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);

        for(auto t: times){
            int u=t[0];int v=t[1];int w=t[2];
            adj[u].push_back({v,w});
        }

        vector<int>time(n+1,INT_MAX);

       priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0,k});
        time[k]=0;
        

        while(!q.empty()){
            int t=q.top().first;
            int node=q.top().second;
            q.pop();

            for(auto it: adj[node]){
                int next=it.first;
                int tnew=it.second;

                if(tnew+t<time[next]){
                    q.push({t+tnew,next});
                    time[next]=t+tnew;
                }
            }
        }int maxtime=0;
        for(int i=1; i<=n; i++){
            if(time[i]==INT_MAX)return -1;
            maxtime=max(time[i],maxtime);
            
        }
        return maxtime;
    }
};