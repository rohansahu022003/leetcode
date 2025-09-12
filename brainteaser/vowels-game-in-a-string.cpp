class Solution {
   
public:
    bool doesAliceWin(string s) {
        static bool isvowel[256]={false};
      string vowel="aeiou";

      for(auto v:vowel)isvowel[v]=true;

      for(auto c:s){
        if(isvowel[c]==true)return true;
      }
       
        return false;
    }
};