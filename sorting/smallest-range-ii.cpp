class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        if(nums.size()==1)return 0;
        sort(nums.begin(), nums.end());
       int minelement=nums[0];
       int maxelement=nums[nums.size()-1];
        int i=0;
        int j=nums.size()-1;
        while(i<nums.size() && j>=0){
            if(nums[j]-k<0)continue;
            minelement=max(minelement,nums[i++]+k);
            
            maxelement=min(maxelement,nums[j--]-k);
        }
        int ans=maxelement-minelement;
        return ans;
    }
};