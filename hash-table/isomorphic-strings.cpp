class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mapping,map;
    
        for(int i=0; i<s.size(); i++){
            if(mapping.find(s[i])!=mapping.end()){
                if(mapping[s[i]]!=t[i])return false;
            }
            if(map.find(t[i])!=map.end()){
                if(map[t[i]]!=s[i])return false;
            }
            else {
                mapping[s[i]]=t[i];
                map[t[i]]=s[i];
            }
        }

        return true;
    }
};