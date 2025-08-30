class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
       char c='a';
      long long len=1;


       for(int i=0; i<operations.size(); i++){
        if(len>k)break;
        len*=2;
       }

       for(int i=operations.size()-1; i>=0; i--){
        long long half= len/2;
        if(k>half){
            k-=half;
            if(operations[i]==1){
                c=(c=='z'?'a':c+=1);
            }
            
        }
        len /=2;
       }
        return c;
       }
};