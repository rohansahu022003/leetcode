class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int>presum;
        int sum=0;
        for(auto num : nums){
          sum+=num;
          presum.push_back(sum);
        }
int ans=0;
        for(int i=0; i<nums.size()-1; i++){
            int l=presum[i];
            int r=sum-l;
            if((l-r)%2==0)ans++;
        }
        return ans;
    }
};