class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxperi=0;
        int peri=0;
        int j=0;
        for(int i=n-1; i>=2; i--){
            int k=i-1;
            while(j<k){
            if(nums[j]+nums[k]>nums[i]){
                peri=nums[j]+nums[k]+nums[i];
                maxperi=max(peri,maxperi);
                j++;
            }
            else j++;
            }

        }
        return maxperi;
    }
};