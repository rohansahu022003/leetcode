class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
    string ans="";
    int len=0;
    int maxlen=INT_MIN;
    for(int i=0; i<s.size(); i++){
       int j=i;
       while(j<s.size()){
        if(ans.find(s[j])!=string::npos){
            ans="";
            break;
        }
        ans.push_back(s[j]);
        len=ans.size();
        maxlen=max(maxlen,len);
        
        j++;

       }
       
    }
    return maxlen;
    }
};