class Solution {
public:
    bool isPalindrome(string s) {
        string news="";
        
        for(auto c: s){
            if(isalnum(c))news.push_back(tolower(c));
           
        }
        int i=0;
        int j=news.size()-1;

        while(i<j){
            if(news[i]!=news[j])return false;
            i++;
            j--;
        }
        return true;
    }
};