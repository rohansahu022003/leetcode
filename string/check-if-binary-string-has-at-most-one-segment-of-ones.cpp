class Solution {
public:
    bool checkOnesSegment(string s) {
        vector<int>num;
    for(int i=0; i<s.lenght(); i++){
      num.push_back(s[i]-'0');
    }
       int count=0;
       int y=0;
       for(int i=0; i<num.size();i++){
        if(num[i]==1 && y==0)count++;
        if(num[i]==1)y=1;
        else y=0;
       }
        if(count==1)return true;
        return false;
    }
};