class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==ans)ans++;
        }
        return ans;
    }
};