class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>ans;
        int a =digits[n-1]+1;
        ans.push_back(a%10);
        int carry=a/10;
        for(int i=n-2; i>=0; i--){
            a=digits[i]+carry;
            carry=0;
            ans.push_back(a%10);
            carry=a/10;
        }
        if(carry)ans.push_back(carry);

        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};