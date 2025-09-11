class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int start=0;
       int stop=nums.size()-1;

       while(start<=stop){
        int mid=(start+stop)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]>target)stop=mid-1;
        else start=mid+1;
       }
       return start;
    }
};