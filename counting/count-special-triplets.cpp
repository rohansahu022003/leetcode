class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,vector<int>>freq;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
             freq[nums[i]].push_back(i);
        }
       for(int j=0; j<nums.size(); j++){
        int m=nums[j];
        int target=m*2;

        if(!freq.count(target))continue;

        auto &vb=freq[target];
        int left=lower_bound(vb.begin(),vb.end(),j)-vb.begin();
        int right=vb.end()-upper_bound(vb.begin(),vb.end(),j);
        ans+=left*right;
       }
        return ans;
    }
};