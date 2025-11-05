class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
long long count=0;
        if(nums.size()%2==1){
            long long mid= ceil(nums.size()/2);
            long long mid2=mid;
            if(nums[mid]!=k){
                count+=abs(nums[mid]-k);
                nums[mid]=k;
            }
            while(mid-1>=0 && nums[mid-1]>k){
                count+=abs(nums[mid-1]-k);
                nums[mid-1]=k;
                mid--;
            }
            while(mid2+1<nums.size() && nums[mid2+1]<k){
                count+=abs(nums[mid2+1]-k);
                nums[mid2]=k;
                mid2++;
            }
        }
       

        return count;
    }
};