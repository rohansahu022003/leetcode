class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.length()==1 || s.length()==2)return true;
        int x=stoi(s);
        int y=0;
        while(x){
           int digit=x%10;
           if(y==1 && digit==1)return true;
           if(digit==1)y=1;
           else y=0;
           x/=10;
        }
        return false;
    }
};