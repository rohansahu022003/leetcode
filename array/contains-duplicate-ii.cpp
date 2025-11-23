class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mpp;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]].push_back(i);
        }

        for(auto m:mpp){
            if(m.second.size()<=1)continue;
            for(int i=0; i<m.second.size()-1; i++){
                for(int j=i+1; j<m.second.size(); j++){
                   if(abs(m.second[i]-m.second[j])<=k)return true;
                }
            }
        }
        return false;
    }
};