class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int missing;
        for(int i=0; i<n; i++){
            bool c=0;
            for(int j=0; j<n; j++){
                if(nums[j]==i){
                    c=1;
                    break;
                }
            }
            if(c==0){
             missing=i;
                break;
            }
        }
        return missing;
    }
};