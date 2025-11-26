class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        if(nums.size()==1)return 0;
        int x=INT_MIN;
        int y=INT_MAX;

        for(int i=0; i<nums.size(); i++){
            if(x<nums[i])x=nums[i];
            if(y>nums[i])y=nums[i];
        }
        for(int i=0; i<k; i++){
            x--;
            y++;
            if(x<=y)return 0;
        }
        return x-y;
    }
};