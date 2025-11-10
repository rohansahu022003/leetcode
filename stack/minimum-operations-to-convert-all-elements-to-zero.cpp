class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>freq;

        for(int i=0; i<nums.size();i++){
           if(nums[i]!=0) freq[nums[i]]++;
        }
        int maxel=*max_element(nums.begin(),nums.end());

        int ans=0;
        for(auto f:freq){
            if(f.first==maxel)ans+=f.second;
            else ans++;
        }

        return ans;
    }
};