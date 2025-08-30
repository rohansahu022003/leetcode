class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        string word="a";

      
        for(int i=0; i<operations.size(); i++){

            
                string oldword=word;
                for(auto c: oldword){
                    if(operations[i]==0){
                        word.push_back(c);

                    }
                    else{
                        c+=1;
                        word.push_back(c);
                    }
                }
            
        }
    
        return word[k-1];
    }
};