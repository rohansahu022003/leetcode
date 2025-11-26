class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int digit=0;
        for(int i=0; i<num.size();i++){
            digit=digit*10+num[i];
        }
        int ans=digit+k;

        vector<int>Ans;

        while(ans){
            Ans.push_back(ans%10);
            ans/=10;
        }
        reverse(Ans.begin(),Ans.end());
        return Ans;
    }
};