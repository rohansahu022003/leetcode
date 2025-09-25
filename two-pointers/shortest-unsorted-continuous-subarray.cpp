class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
      vector<int>newa=nums;
      sort(newa.begin(), newa.end());
      int ind=INT_MAX;
      int j=INT_MAX;

      for(int i=0; i<nums.size(); i++ ){
        if(nums[i]!=newa[i]){
            ind=i;
            break;
        }

      }
      for(int i=nums.size()-1; i>=0; i--){
        if(newa[i]!=nums[i]){
            j=i;
            break;
        }

      }
      if(ind==INT_MAX)return 0;
      int ans=j-ind+1;
      return ans;
    }
};