class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();

       using T = pair<int, pair<int,int>>;  

priority_queue<T, vector<T>, greater<T>> pq;

        pq.push({0,{0,0}});
        int drow[]={1,-1,0,0};
        int dcol[]={0,0,1,-1};
         vector<vector<int>>dist(n,vector<int>(m,INT_MAX));


        while(!pq.empty()){
            auto it=pq.top();
            int row=it.second.first;
            int col=it.second.second;
           int efforts=it.first;
            pq.pop();
            dist[0][0]=0;

        if(row==n-1 && col==m-1) return efforts;

            for(int i=0; i<4; i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];


                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m){
                    int newefforts=max(abs(heights[row][col]-heights[nrow][ncol]),efforts);
                    if(newefforts<dist[nrow][ncol]){
                        dist[nrow][ncol]=newefforts;
                    pq.push({newefforts,{nrow,ncol}});
                    
                    }
                }
            }


        }
        return 0;



    }
};