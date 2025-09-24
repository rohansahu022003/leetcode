class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result=1;
        int i=nums.size()-1;
        int result1=result*nums[i]*nums[i-1]*nums[i-2];
        int result2=result*nums[0]*nums[1]*nums[i];
        result=max(result1, result2);
        return result;
    }
};