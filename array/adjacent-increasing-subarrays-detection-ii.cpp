class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int prev=1;
        int curr=1;
        int k=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]>nums[i]){
                curr++;
                k=max(k,curr/2);
            }
            else {
                k=max(k,min(prev,curr));
                prev=curr;
                curr=1;
            }

        }
        if(prev+curr==nums.size())return min(prev,curr);
        return k;
    }
};