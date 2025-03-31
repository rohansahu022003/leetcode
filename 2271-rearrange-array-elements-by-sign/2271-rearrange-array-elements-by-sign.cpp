class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int j=0,k=0;
        vector<int>positive,negative;
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                positive.emplace_back(nums[i]);
            }
            else{
                negative.emplace_back(nums[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(i%2==0){
                nums[i]=positive[k];
                k++;
            }
            else{
                nums[i]=negative[j];
                j++;
            }
        }
        return nums;

    }
};