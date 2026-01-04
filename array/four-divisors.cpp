class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(auto n: nums){
            unordered_set<int>st;
            for(int i=1; i<=sqrt(n); i++){
                if(n%i==0){
                    st.insert(i);
                    st.insert(n/i);
                }
            }
            if(st.size()==4){
             for(auto s: st){
                ans+=s;
             }
            }
        }

        return ans;
    }
};