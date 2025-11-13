class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;

        for(int i=0; i<nums.size(); i++){
            int a=target-nums[i];
            if(mpp.find(a)!=mpp.end()){
                return {mpp[a],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};