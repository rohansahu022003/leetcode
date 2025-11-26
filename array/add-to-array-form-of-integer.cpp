class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       vector<int>ans;
int carry=0;
       for(int i=num.size()-1; i>=0; i--){
        int j=k%10;
        k/=10;
        int m=num[i]+j+carry;
        carry=0;
        ans.push_back(m%10);
        carry=m/10;
       }
       while(k){
        ans.push_back(k%10);
        k/=10;
       }
      if(carry!=0)ans.push_back(carry);
       reverse(ans.begin(),ans.end());
       return ans;
    }
};