class Solution {
public:
    string makeFancyString(string s) {
        string result="";
       for(auto c: s){
        if(result.length()>=2 && result[result.length()-1]==c && result[result.length()-2]==c){continue;}
        result.push_back(c);
       }
       return result;
        
    }
};