class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int k=0;

        for(int j=1; j<nums.size(); j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
                k=0;
            }
            else if(nums[i]==nums[j] && k==0){
                i++;
                k++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};