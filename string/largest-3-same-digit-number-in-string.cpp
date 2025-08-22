class Solution {
public:
    string largestGoodInteger(string num) {
        
        string ans="";
        for(int i=0; i<num.size()-1; i++){
            if(num[i]==num[i+1]&& num[i+1]==num[i+2]){
             string potential=num.substr(i,3);
             ans=max(ans,potential);
            }
        }
        return ans;
    }
    
};