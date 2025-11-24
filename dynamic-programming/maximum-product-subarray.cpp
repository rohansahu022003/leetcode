class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int ans=INT_MIN;
       int m=1;
       int n=nums.size();

       for(int i=0; i<n;i++){
        m*=nums[i];
        ans=max(m,ans);
        if(m==0)m=1;
       }
       m=1;
       for(int i=n-1; i>=0; i--){
        m*=nums[i];
        ans=max(ans,m);
        if(m==0)m=1;
       }
       
       
       return ans;
    }
};