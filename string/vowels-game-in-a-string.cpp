class Solution {
   
public:
    bool doesAliceWin(string s) {
      string vowel="aeiou";

      for(auto c:s){
        if(vowel.find(c)!=string::npos)return true;
      }
       
        return false;
    }
};