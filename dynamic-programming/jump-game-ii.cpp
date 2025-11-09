class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int ans=0;
        int remain=1;
        for(int i=0; i<nums.size(); i++){
        remain--;
        remain+=nums[i];
        if(nums[i]>0)ans++;
if(remain>=nums.size()-1-i)break;
        }
        return ans;
    }
};