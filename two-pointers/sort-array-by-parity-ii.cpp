class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(i%2==0 && nums[i]%2==0)i++;
            else if(j%2==1 && nums[j]%2==1)j--;
            else{
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        return nums;
    }
};