class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_set<int>freq(nums.begin(), nums.end());

     if(freq.size()!=nums.size())return true;  return false;
    }
};