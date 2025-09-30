class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int n=nums.size();
        while(n!=1){
            vector<int>temp(n-1);
            int j=0;
            for(int i=0; i<n-1; i++){
                temp[j]=(nums[i]+nums[i+1])%10;
                j++;
            }
            nums=temp;
            n=nums.size();
        }
        return nums[0];
    }
};