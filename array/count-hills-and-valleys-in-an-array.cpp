class Solution {
public:
    int countHillValley(vector<int>& nums) {
    vector<int>arr;
    int count=0;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]!=nums[i-1]){
            arr.push_back(nums[i]);
        }
    }
    for(int i=1; i<n-1; i++){
        if((nums[i-1]<nums[i] && nums[i]>nums[i+1]) || (nums[i-1]>nums[i] && nums[i]<nums[i+1])){
            count++;
        }
    }
        return count;

    }
};