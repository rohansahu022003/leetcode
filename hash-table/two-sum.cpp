class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>hash;

       int n=nums.size();
       for(int i=0; i<n; i++){
        int a=target-nums[i];
        if(hash.find(a)!=hash.end()){
          return {hash[a],i};    
        
        }
        hash[nums[i]]=i;
       }
       return {-1,-1};
    }
};