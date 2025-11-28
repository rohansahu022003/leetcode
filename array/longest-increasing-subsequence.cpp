class Solution {
public:
  int func(int i, int prev, vector<int>& nums, vector<vector<int>>&dp,int n){
    if(i==n)return 0;

    if(dp[i][prev+1]!=-1)return dp[i][prev+1];

    int nottake=func(i+1, prev, nums,dp, n);

    int take=0;
    if(prev==-1 || nums[i]>nums[prev]){
        take=1+func(i+1,i, nums,dp, n);
    }

    return dp[i][prev+1]=max(nottake,take);
  }
    
public:
    int lengthOfLIS(vector<int>& nums) {
       int n=nums.size();

       vector<vector<int>>dp(n,vector<int>(n+1,-1));
     
     return func(0,-1,nums,dp,n);

    }
};