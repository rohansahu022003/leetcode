class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
         int ans;
        int n=nums.size();
        if(k==1)return 0;
        else{
        ans=nums[n-1]-nums[n-2];
        }

        return ans;
    }
};