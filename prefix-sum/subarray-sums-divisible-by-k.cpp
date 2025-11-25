class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,sum=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        for(auto num:nums){
            sum+=num;
            int mod=abs(sum%k);
            ans+=mpp[mod];
            mpp[mod]++;
        }
        return ans;
    }
};