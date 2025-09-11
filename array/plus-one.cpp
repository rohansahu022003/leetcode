class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        long long num=0;
        for(int i=0; i<digits.size();i++){
            num=num*10+digits[i];
        }
        num++;
        while(num){
            int d=num%10;
            ans.push_back(d);
            num/=10;

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};