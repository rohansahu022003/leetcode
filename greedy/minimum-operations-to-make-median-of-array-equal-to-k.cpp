class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
int count=0;
        if(nums.size()%2==1){
            long long mid= ceil(nums.size()/2);
            if(nums[mid]!=k)count+=abs(nums[mid]-k);
            if(nums[mid-1]>k)count+=abs(nums[mid-1]-k);
            if(nums[mid+1]<k)count+=abs(nums[mid+1]-k);
        }
       

        return count;
    }
};