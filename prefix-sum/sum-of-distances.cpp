class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n);

        unordered_map<int,vector<int>>mpp;
        for(int i=0; i<n; i++){
            mpp[nums[i]].push_back(i);
        }

        for(auto m:mpp){
            if(m.second.size()==1)continue;
            else{
                for(int i=0; i<m.second.size(); i++){
                    for(int j=0; j<m.second.size(); j++){
                        ans[m.second[i]]+=abs(m.second[i]-m.second[j]);
                    }
                }
            }
        }
        return ans;
    }
};