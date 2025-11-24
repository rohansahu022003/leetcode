class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int ans=0;
       int n=nums.size();
       vector<int>dp(n); 
       dp[0]=nums[0];
       for(int i=1;i<n;i++){
        dp[i]=nums[i]*(dp[i-1]>0?dp[i-1]:1);
        if(dp[i-1]>0)ans=max(ans,dp[i]);
       }
       return ans;
    }
};