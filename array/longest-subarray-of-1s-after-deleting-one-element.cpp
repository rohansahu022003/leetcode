class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0,right=0,zerocount=0,maxlen=0;
        int n=nums.size();
        while(right<=n-1){
            if(nums[right]==0){
                zerocount++;
            }
            if(zerocount>1){
                if(nums[left]!=nums[left+1]){
                left++;
                zerocount--;
                }
                else left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
          

        }
        return maxlen-1;
        
    }
};