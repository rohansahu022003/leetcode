class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        int j=1;
        int maxlen=INT_MIN;
        while(j<nums.size()){
           int k=nums[j]-nums[i];
           if(k==1){
            maxlen=max(maxlen,j-i+1);
           }
           if(k!=1)i++;
           j++;
        }
        if(maxlen==INT_MIN)return 0;
        return maxlen;
    }
};