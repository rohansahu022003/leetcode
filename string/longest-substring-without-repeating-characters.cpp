class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    string ans="";
    int len=0;
    int maxlen=INT_MIN;
    for(int i=0; i<s.size(); i++){
        if(ans.find(s[i])!=string::npos){
            len=0;
            ans="";
        }
        ans.push_back(s[i]);
        len=ans.size();
        maxlen=max(maxlen,len);
    }
    return maxlen;
    }
};