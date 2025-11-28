class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
      unordered_map<long long,long long>freq;
      long long ans=LLONG_MIN;
      long long sum=0;

      freq[0]=0;

      for(int i=0; i<nums.size(); i++){
        sum+=nums[i];

        if(!freq.count((i+1)%k))freq[(i+1)%k]=sum;
        else{
        long long m=sum-freq[(1+i)%k];
        ans=max(ans,m);
        if(sum<freq[(1+i)%k]){
            freq[(1+i)%k]=sum;
        }
        }
       

      }
      return ans;

    }
};