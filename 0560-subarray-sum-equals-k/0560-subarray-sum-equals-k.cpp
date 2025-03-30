class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
              map<int,int>presum;

       int sum=0,cnt=0;
       presum[0]=1;
       int n=nums.size();

       for(int i=0; i<n; i++){
        sum+=nums[i];
        int remove=sum-k;
        cnt+=presum[remove];
        presum[sum]+=1;
       }
       return cnt;
    }

};