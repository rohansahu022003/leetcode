class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int j=1;
        for(int i=digits.size()-1; i>=0; i--){
            int d=digits[i]+j;
            if(d<10){
                ans.push_back(d);
                j=0;
            }
            else{
                ans.push_back(d%10);
            }
        }
        if(j==1)ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};