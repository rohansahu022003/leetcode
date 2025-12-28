class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mapping;

        for(int i=0; i<s.size(); i++){
            if(mapping.find(s[i])!=mapping.end()){
                if(mapping[s[i]]!=t[i])return false;
            }
            else mapping[s[i]]=t[i];
        }

        return true;
    }
};