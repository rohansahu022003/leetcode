class Solution {
public:
    int pivotInteger(int n) {
     int i=1;
     int j=n;
     int sum1=1;
     int sum2=n;
     while(i<=n){
     if(sum1==sum2 && i==j){
        return i;
     }
    else if(sum1<=sum2){
        i++;
        sum1+=i;
     }
     else if(sum1>=sum2){
        j--;
        sum2+=j;
     }
     
     }  
     return -1; 
    }
};