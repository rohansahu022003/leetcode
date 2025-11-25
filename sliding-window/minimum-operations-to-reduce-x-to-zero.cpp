class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(auto num:nums)sum+=num;
        if(sum<x)return -1;
        if(sum==x)return nums.size();
        int target=sum-x;

        int left=0;
        int longest=-1;
        int current=0;

        for(int right=0; right<nums.size(); right++){
            current+=nums[right];
            
            while(current>target){
                current-=nums[left];
                left++;
            }
            if(current==target)longest=max(longest,right-left+1);

        }
        return (longest==-1)?-1:nums.size()-longest;
    }
};