class Solution {
public:
     int func(int ind,int prevind,vector<int>& arr, vector<vector<int>>&dp, int n){
        if(ind==n)return 0;
       if(dp[ind][prevind+1]!=-1)return dp[ind][prevind+1];
        int nottake=func(ind+1, prevind, arr, dp,n);

        int take=0;

        if(prevind==-1||arr[prevind]<arr[ind]){
            take=func(ind+1,ind,arr, dp,n)+1;
        }
        

        return dp[ind][prevind+1]=max(take,nottake);
     }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();

        vector<vector<int>>dp(n,vector<int>(n+1,-1));

        return func(0,-1,nums,dp, n);
    }
};