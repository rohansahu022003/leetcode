class Solution {
public:
    string convertToBase7(int num) {
        if (num==0)return to_string(num);
        int n=abs(num);
string ans="";
        while(n){
            int d=n%7;
            n/=7;
            ans.push_back('0'+d);
        }

        if(num<0)ans.push_back('-');
        reverse(ans.begin(),ans.end());
        return ans;

    }
};