class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0;
        int sum=0;
        unordered_map<int,int>mpp;
        mpp[0]=-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1)sum++;
            else sum--;
            if(mpp.count(sum))ans=max(ans,i-mpp[sum]);
            else mpp[sum]=i;
        }
        return ans;
    }
};