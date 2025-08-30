class Solution {
public:
    bool isValid(string word) {
        bool vowel=false;
        bool consonant=false;
        string vowelist="aeiouAEIOU";

        if(word.length()<3){
            return false;
        }
        for(auto c: word){
          if(isalpha(c)){
            if(vowelist.find(c)!=string::npos){
                vowel=true;
            }
            else{
                consonant=true;
            }

          }
            else if(!isdigit(c)){
                return false;
            }
        }
        return vowel && consonant;
    }
};