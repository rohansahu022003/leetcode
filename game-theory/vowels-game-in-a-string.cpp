class Solution {
public:
    bool doesAliceWin(string s) {
    string t="aeiou";
        for(int i=0;i<s.size();i++)
        {
            if(t.find(s[i])!=string::npos)
            return true;
        }
        return false;
    }
};