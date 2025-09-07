class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n==0)return {0};
        while(n>1){
            ans.push_back(n);
            ans.push_back(-(n));
            n--;
            n--;

        }
        if(n==1)ans.push_back(0);

        return ans;
    }
};