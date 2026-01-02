class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freq;

        for(auto n: nums){
            freq[n]++;
        }

        int ans;

        for(auto f: freq){
            if(f.second== nums.size()/2){
                ans=f.first;
                break;
            }
        }
        return ans;
    }
};