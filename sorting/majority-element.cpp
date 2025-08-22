class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(cnt==0){
                cnt++;
                ele=nums[i];
            }
            else if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt2;
        for(int i=0; i<nums.size(); i++){
            if(ele==nums[i]){
                cnt2++;
            }
            if(cnt2>nums.size()/2){
                return ele;
            }
        }
        return -1;
    }
};