class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int>st(nums.begin(), nums.end());
        int maxsum=0;
        int sum=0;
        for(auto s: st){
            if(s>=0){
            sum+=s;
            maxsum=max(maxsum,sum);
            }
        }
        return maxsum;
    }
};