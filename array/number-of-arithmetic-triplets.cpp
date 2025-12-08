class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int>freq;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(freq.count(nums[i]-diff) && freq.count(nums[i]+diff))ans+=freq[nums[i]-diff]*freq[nums[i]]* freq[nums[i]+diff];
        }
       return ans; 
    }
};