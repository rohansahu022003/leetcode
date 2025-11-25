class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int sum=0,ans=0;
      
      unordered_map<int,int>mpp;
      mpp[0]=1;
      for(auto num:nums){
        sum+=num;
        int remove=sum-k;
        ans+=mpp[remove];
        mpp[sum]++;
      }
    
    return ans;
    }
};