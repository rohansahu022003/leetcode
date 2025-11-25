class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0;
        int ans=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;

        for(auto num:nums){
            sum+=num;
            int remove=(sum-goal);
            ans+=mpp[remove];
            mpp[sum]++;

        }
        return ans;
    }
};