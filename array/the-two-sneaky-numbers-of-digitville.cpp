class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       unordered_map<int,int>freq;
       for(int i=0; i<nums.size(); i++){
        freq[nums[i]]++;
       } 
       vector<int>ans;
       for(auto m:freq){
        if(m.second==2)ans.push_back(m.first);
       }
       return ans;
    }
};