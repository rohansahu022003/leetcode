class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        int k=2;
        int j=0;
        int count=0;

        while(k<n){
            while(nums[i]==nums[j]==nums[k]){
                i+=2;
                j+=2;
                k+=2;
            }
            while(nums[i]==nums[j]){
                i++;
                j++;
                k++;
            }
            while(nums[i]==nums[k]){
                i++;
                k++;
            }
            while(nums[j]==nums[j+1]){
                j++;
            }
            if((nums[j]<nums[i] && nums[i]>nums[k]) || (nums[j]>nums[i] && nums[i]<nums[k])){
                count++;
                
            }
                j++;
                i++;
                k++;
            

        } 
        return count;

    }
};