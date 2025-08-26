class Solution {
public:
    int countLargestGroup(int n) {
        map<int,int>groups;
        
        for(int i=1; i<=n; i++){
            int num=i;
            int sum=0;
            while(num>0){
                int x=num%10;
                sum+=x;
                num/=10;
            }
            groups[sum]++;
        }
        int maxgroup=INT_MIN;
        
        for(auto g:groups){
           maxgroup=max(g.second,maxgroup);
        }
        int count=0;
        for(auto g:groups){
           if (g.second==maxgroup){
            count++;
           }
        }
      
return count;
    }
};