class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
    vector<int>ans;
    for(auto f:freq){
        if(f.second>n/3)ans.push_back(f.first);
    }
    return ans;
    }
};