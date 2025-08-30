class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
       char c='a';

       for(int i=operations.size()-1; i>=0;i--){
        long long half= 1LL<<i;
        if(k>half){
            k-=half;
            if(operations[i]==1){
                c=(c=='z'?'a':c+1);
            }
        }
       }
        return c;
       }
};