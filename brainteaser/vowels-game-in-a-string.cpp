class Solution {
    private:
    int isvowel(char c,int& count){
        string vowel="aeiou";
        for(auto v:vowel){
            if(v==c){
                count++;
            }
        }
        return count;
        
    }
public:
    bool doesAliceWin(string s) {
        int count=0;
        for(auto c:s){
            isvowel(c,count);
        }
        if(count==0)return false;
        return true;
    }
};