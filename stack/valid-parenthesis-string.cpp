class Solution {
public:
    bool checkValidString(string s) {
        int leftmin=0,leftmax=0;

        for(int i=0; i<s.size(); i++){
          if(s[i]=='('){
            leftmin++;
            leftmax++;
          }
          else if(s[i]==')'){
            leftmin--;
            leftmax--;
          }
          else{
            leftmin--;
            leftmax++;
          }
          if(leftmax<0)return 0;
          if(leftmin<0)leftmin=0;
        }
        return leftmin==0;
    }
};