class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
       unordered_map<long,long long>maxsum;
       long long sum=0;
       maxsum[0]=0;
       long long ans=LLONG_MIN;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(!maxsum.count((i+1)%k)){
                maxsum[(i+1)%k]=sum;
            }
            else{
                int m=sum-maxsum[(i+1)%k];
            if(m>ans)ans=m;
                if(sum<maxsum[(i+1)%k]){
                    maxsum[(i+1)%k]=sum;
                }

            }
        }
        return ans;

    }
};