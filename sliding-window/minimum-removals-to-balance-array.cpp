class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());

       int ans=INT_MAX;
       int n=nums.size();
      int maxlen=0;
      int left=0;

      for(int right=0; right<n; right++){
        while((long long)nums[right]> (long long)nums[left]*k)left++;

        maxlen=max(maxlen, right-left+1);
      }

       return n-maxlen ;
    }
};