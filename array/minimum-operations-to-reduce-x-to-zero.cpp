class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        while(i<=j && x>0){
            if(x>=nums[j] && x>=nums[i]){
                x-=max(nums[j],nums[i]);
                ans++;
                if(nums[j]>=nums[i])j--;
                else i++;
            }
          else  if(x<nums[j] && x>=nums[i]){
                x-=nums[i];
                i++;
                ans++;
            }
            else if(x>=nums[j] && x<nums[i]){
                x-=nums[j];
                j--;
                ans++;
            }
            else{
                i++;
                j--;
            }
        
        }
        cout<<x;
        if(x)return -1;
        return ans;
    }
};