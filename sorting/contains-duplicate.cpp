class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_set<int>freq(nums.begin(), nums.end());

    return nums.size()!=freq.size();
    }
};