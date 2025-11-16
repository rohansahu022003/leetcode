class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
string vowel="aeiouAEIOU";
        while(i<j){
         if(vowel.find(s[i])!=string::npos && vowel.find(s[j])!=string::npos){
            swap(s[i++],s[j--]);
         }
         else if(vowel.find(s[i])!=string::npos && vowel.find(s[j])==string::npos)j--;
         else if(vowel.find(s[i])==string::npos && vowel.find(s[j])!=string::npos)i++;
         else{
            i++;
            j--;
         }
        }
        return s;
    }
};