class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>ans;
        int num=0;
      for(auto n:nums){
        num=((num<<1)+n)%5;
        ans.push_back(num==0);
      }
      return ans;

    }
};