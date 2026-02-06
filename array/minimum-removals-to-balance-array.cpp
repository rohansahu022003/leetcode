class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());

       int ans=INT_MAX;
       int n=nums.size()-1;
       for(int i=0; i<=n; i++){
        if(nums[n]<=nums[i]*k)ans=min(ans,i);
       } 

       for(int i=n; i>=0 ;i--){
        if(nums[i]<=nums[0]*k)ans=min(ans,n-i);
       }
       return ans;
    }
};