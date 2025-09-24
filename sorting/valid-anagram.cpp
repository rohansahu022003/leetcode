class Solution {
public:
    bool isAnagram(string s, string t) {
        for(int i=0; i<t.size(); i++){
            if(s.find(t[i])==string::npos)return false;
        }
        return true;
    }
};