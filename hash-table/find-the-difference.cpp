class Solution {
public:
    char findTheDifference(string s, string t) {
     int result=0;
     for(int i=0; i<s.size(); i++){
        result=result^s[i];
     }
     for(int i=0; i<t.size(); i++){
        result=result^t[i];
     }
     return result;
    }
};