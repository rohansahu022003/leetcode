class Solution {
    private:
    bool isvowel(char w){
        string vowel="aeiouAEIOU";
      return vowel.find(w)!=string::npos;
    }
public:
    string sortVowels(string s) {
       vector<char> vowel;
       for(auto c:s){
        if(isvowel(c))vowel.push_back(c);
       }
       sort(vowel.begin(),vowel.end());

       int i=0;
       for(auto &c: s){
        if(isvowel(c))c=vowel[i++];
       }
        return s;
    }
};