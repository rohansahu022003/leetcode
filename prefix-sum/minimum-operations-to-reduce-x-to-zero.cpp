class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        for(int n : nums) total += n;

        int target = total - x;
        if(target < 0) return -1;
        if(target == 0) return nums.size();

        int n = nums.size();
        int left = 0, curSum = 0, longest = -1;

        for(int right = 0; right < n; right++){
            curSum += nums[right];

            while(curSum > target){
                curSum -= nums[left];
                left++;
            }

            if(curSum == target){
                longest = max(longest, right - left + 1);
            }
        }

        return (longest == -1) ? -1 : n - longest;
    }
};
