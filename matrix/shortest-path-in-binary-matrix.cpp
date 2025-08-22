class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        
        if(grid[0][0]==1 || grid[n-1][n-1]==1)return -1;

        

        queue<pair<int,int>>pq;

 grid[0][0]=1;
        pq.push({0,0});
        int drow[]={1,-1,0,0,1,1,-1,-1};
        int dcol[]={0,0,1,-1,1,-1,1,-1};
       int dist=grid[0][0];

        while(!pq.empty()){
           int row=pq.front().first;
           int col=pq.front().second;
            dist=grid[row][col];
          
            pq.pop();

            
             if (row == n-1 && col == n-1) return dist; 

            for(int i=0; i<8; i++){
               int nrow=row+drow[i];
               int ncol=col+dcol[i];
               if(nrow>=0 && ncol>=0 && nrow<n && ncol<n && grid[nrow][ncol]==0 ){
                pq.push({nrow,ncol});
                grid[nrow][ncol]=grid[row][col]+1;

               
            }
            }
        }
        return -1;

        
    }
};