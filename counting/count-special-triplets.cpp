class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int const mod=1e9+7;
        unordered_map<int,vector<int>>freq;
        long long ans=0;
        for(int i=0; i<nums.size(); i++){
             freq[nums[i]].push_back(i);
        }
       for(int j=0; j<nums.size(); j++){
        int m=nums[j];
        int target=m*2;

        if(!freq.count(target))continue;

        auto &vb=freq[target];
        long long left=lower_bound(vb.begin(),vb.end(),j)-vb.begin();
        long long right=vb.end()-upper_bound(vb.begin(),vb.end(),j);
        ans=(ans+left*right)%mod;
       }
        return ans;
    }
};