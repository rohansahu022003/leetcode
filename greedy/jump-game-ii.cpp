class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        int remain=1;
        for(int i=0; i<nums.size(); i++){
remain--;
remain+=nums[i];
ans++;
if(remain>=nums.size()-i)break;
        }
        return ans;
    }
};