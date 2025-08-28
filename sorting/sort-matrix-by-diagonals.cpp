class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
unordered_map<int, priority_queue<int>>maxheap;
unordered_map<int, priority_queue<int,vector<int>,greater<int>>>minheap;

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        int diff=i-j;
        if(diff>=0)maxheap[diff].push(grid[i][j]);
        minheap[diff].push(grid[i][j]);
    }
}



for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        int key=i-j;
        if(key>=0){
            grid[i][j]=maxheap[key].top();
            maxheap[key].pop();
        }

       else{ grid[i][j]=minheap[key].top();
        minheap[key].pop();
       }
    }
}
return grid;


    }
};