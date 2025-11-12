class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(find(nums.begin(),nums.end(),1)!=nums.end())return nums.size()-1;
        for(int i=0; i<nums.size()-1; i++){
            if(gcd(nums[i], nums[i+1])==1)return nums.size();
        }
        return -1;
    }
};