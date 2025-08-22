class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long long count=0;
        int k=1;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                count+=k;
                k++;
            }
            else if(nums[i]!=0){
                k=1;
            }


        }
        return count;
    }
};