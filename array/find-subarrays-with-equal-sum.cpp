class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
     unordered_map<int,int>sum;

     for(int i=0; i<nums.size()-1; i++){
        int s=nums[i]+nums[i+1];
        sum[s]++;
     }   

     for(auto p:sum){
        if(p.second>=2)return true;
     }
     return false;
    }
};