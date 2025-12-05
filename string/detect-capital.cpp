class Solution {
public:
    bool detectCapitalUse(string word) {
       int lower=0;
       int upper=0;
       for(auto c: word){
        if('A'<=c && c<='Z'){
            if(lower>0)return false;
            upper++;
        }
        else{
            if(upper>1)return false;
            lower++;
        }
       } 
       return true;
    }
};