class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>even;
        vector<int>odd;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0)even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        vector<int>ans=even;
        for(int i=0; i<odd.size();i++){
            ans.push_back(odd[i]);
        }
        return ans;
        
        
    }
};