class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i=0;
        int count=0;
        int j=0;
        
        while(j<nums.size()){
            int sum;
           if(i==j)sum=nums[i];
           else if(i!=j)sum=nums[i]+nums[j];

           if(sum==k){
            count++;
            i++;
            j++;
           }
           else if(sum>k){
            i++;
           }
           else{
            j++;
           }
        }
        
        return count;
    }
};