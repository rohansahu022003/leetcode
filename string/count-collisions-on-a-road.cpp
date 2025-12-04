class Solution {
public:
    int countCollisions(string directions) {
        int ans=0;

        for(int i=0; i<directions.size()-1;i++){
            if(directions[i]=='R' && directions[i+1]=='L'){
                ans+=2;
                directions[i]=='S';
                directions[i+1]='S';
                
            }
            else if(directions[i]=='R' && directions[i+1]=='S'){
                ans++;
                
            }
            else if(directions[i]=='S'  && directions[i+1]=='L'){
                ans++;
                directions[i+1]='S';
            }
        
        }
        return ans;
    }
};