class Solution {
public:
    string multiply(string num1, string num2) {
       
       int n=num1.size(),m=num2.size();

       vector<int>num(n+m,0);

       for(int i=n-1; i>=0;i--){
        for(int j=m-1; j>=0; j--){
            int mul=(num1[i]-'0') * (num2[j]-'0');
            int sum=mul+num[i+j+1];

            num[i+j+1]=sum%10;
            num[i+j]+=sum/10;
        }

       }
       
       string ans="";
       for(auto n: num){
        if(!(ans.empty() && n==0) ){
            ans.push_back(n+'0');
        }
       }
         return ans.empty()?"0" : ans;
       }
      
};