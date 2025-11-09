class Solution {
public:
    int rob(vector<int>& nums) {
        for(int i=2; i<nums.size();i++){
            nums[i]+=*max_element(nums.begin(), nums.begin()+(i-1));

        }
        int ans=*max_element(nums.begin(),nums.end());
        return ans;
    }
};