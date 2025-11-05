class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
long long count=0;
        if(nums.size()%2==1){
            long long mid= ceil(nums.size()/2);
            if(nums[mid]!=k)count+=abs(nums[mid]-k);
            if(mid-1>=0 && nums[mid-1]>k)count+=abs(nums[mid-1]-k);
            if(mid+1<nums.size() && nums[mid+1]<k)count+=abs(nums[mid+1]-k);
        }
       

        return count;
    }
};