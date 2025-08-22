class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n= image.size();
        int m=image[0].size();
        int oldcolor=image[sr][sc];
        if (oldcolor == color) return image;
        
        queue<pair<int,int>>q;
        image[sr][sc]=color;
        q.push({sr,sc});
        int drow[]={1,-1,0,0};
        int dcol[]={0,0,1,-1};
        while(!q.empty()){
            int row= q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==oldcolor){
                    image[nrow][ncol]=color;
                    q.push({nrow,ncol});
                
                }
            }

        }
        
        

        return image;
    }
};