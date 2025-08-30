class Solution {
public:
    string makeFancyString(string s) {
        string result="";
        for(int i=0; i<s.length(); i++){
            if(i==0)result.push_back(s[0]);
            else if(s[i-1]==s[i] && s[i]==s[i+1]){
            continue;
            }
            else result.push_back(s[i]);

        }
        return result;
        
    }
};