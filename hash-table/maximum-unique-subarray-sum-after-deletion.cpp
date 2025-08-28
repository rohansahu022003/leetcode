class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int>st(nums.begin(), nums.end());
        int maxsum=*st.begin();
        int sum=*st.begin();
        for(auto s: st){
            if(s!=*st.begin()){
            sum=max(s,sum+s);
            maxsum=max(maxsum,sum);
            }
            
        }
        return maxsum;
    }
};