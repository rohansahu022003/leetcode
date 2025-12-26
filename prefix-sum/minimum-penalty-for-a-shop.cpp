class Solution {
public:
    int bestClosingTime(string customers) {
        int count=0;
        for(auto c:customers){
            if(c=='Y')count++;
        }
        int ans=0;
        int old=count;
        for(int i=0; i<customers.size(); i++){
            if(customers[i]=='Y')count--;
            else count++;
            if(count<old){
               ans=i+1;
               old=count;
            }
        }
        
        return ans;
    }
};