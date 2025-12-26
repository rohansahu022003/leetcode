class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int maxreach=0;
        int ans=0;
        for(int i=0;i<nums.size(); i++){
          if(i+nums[i]>maxreach){
            maxreach=i+nums[i];
            ans++;
          }
          if(maxreach>=nums.size()-1)break;

        }
        return ans;
       
    }
};