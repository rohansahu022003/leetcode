class Solution {
    private:
    int isvowel(string s,int& count){
        static bool isVowel[256]={false};
        bool initialized=false;
        if(!initialized){
             string vowel="aeiou";
             for(auto v:vowel)isVowel[v]=true;
             initialized=true;

        }
       for(auto c:s)if(isVowel[c]==true)count++;

       return count;
        
    }
public:
    bool doesAliceWin(string s) {
        int count=0;
       isvowel(s,count);
        if(count==0)return false;
        return true;
    }
};