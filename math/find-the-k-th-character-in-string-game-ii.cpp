class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
      char c='a';
      long long len=1;
      vector<long long>length;
      int shift=0;


       for(int i=0; i<operations.size(); i++){
        len*=2;
        length.push_back(len);
        if(len>k)break;
        
       }

       for(int i=length.size()-1; i>=0; i--){
        long long half= length[i]/2;
        if(k>half){
            k-=half;
            if(operations[i]==1){
              shift++;
            }
            
        }
        
       }
        return c+ (shift % 26);
       }
};