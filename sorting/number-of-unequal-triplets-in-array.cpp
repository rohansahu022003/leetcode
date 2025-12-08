class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto num: nums)freq[num]++;
        vector<int>f;
        for(auto p: freq)f.push_back(p.second);

        int total=nums.size();
        int left=0;
        int ans=0;

        for(auto count: f){
            int right=total-left-count;
            ans+=left*right*count;
            left+=count;
        }
        return ans;
    }
};