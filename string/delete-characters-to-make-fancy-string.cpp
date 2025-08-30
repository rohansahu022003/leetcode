class Solution {
public:
    string makeFancyString(string s) {
        string result="";
       for(auto c: s){
        if(result.length()>=2 && result.back()==c && result[result.length()-2]==c){continue;}
        result.push_back(c);
       }
       return result;
        
    }
};