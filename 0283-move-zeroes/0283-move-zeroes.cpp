class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count++;
            }
        }
        while(count--){
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i]==0 && nums[i+1]!=0){
                    swap(nums[i], nums[i+1]);
                }

            }

        }
        for(auto it:nums){
            cout<<it<<" ";
        }
    }
};