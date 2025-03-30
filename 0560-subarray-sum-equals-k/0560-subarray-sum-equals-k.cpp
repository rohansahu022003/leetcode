class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
      
      int count = 0;
        int sum = 0;
        map<int, int> presum;
        
        // Initialize the map with sum 0 to handle cases where sum == k
        presum[0] = 1;

        for (int num : nums) {
            sum += num;

            // Check if (sum - k) is present in the map
            if (presum.find(sum - k) != presum.end()) {
                count += presum[sum - k];
            }

            // Increment frequency of the current sum
            presum[sum]++;
        }

        return count;
    }

};