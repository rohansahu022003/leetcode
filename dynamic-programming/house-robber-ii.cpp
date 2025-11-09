class Solution {
public:
    int rob(vector<int>& nums) {
      int ans=0;
      if(nums.size()<=3)return *max_element(nums.begin(),nums.end());
     vector<int>temp(nums.begin(),nums.end());

     for(int i=2; i<temp.size()-1;i++){
        temp[i]+=*max_element(temp.begin(), temp.begin()+(i-1));
     }
     for(int i=nums.size()-3; i>0; i--){
        nums[i]+=*max_element(nums.begin()+i+2, nums.end());
     }

     ans=max(*max_element(temp.begin(), temp.end()),*max_element(nums.begin(), nums.end()));
      return ans;
    }
};