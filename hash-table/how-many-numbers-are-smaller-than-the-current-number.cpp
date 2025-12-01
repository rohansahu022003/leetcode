class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>original(nums);
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<int>dp(n,0);
        unordered_map<int,int>mp;
        int p=1;
        for(int i=1; i<n; i++){
         if(nums[i]>nums[i-1]){
            dp[i]=dp[i-1]+p;
            p=1;
         }
         else{
            dp[i]=dp[i-1];
            p++;
         }
         mp[nums[i]]=dp[i];
        }

        for(int i=0; i<n; i++){
            original[i]=mp[original[i]];
        }
return original;
    }
};