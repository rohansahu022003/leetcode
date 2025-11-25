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
                 long long total_sum=0,presum=0,postsum=0;
                for(int i=0; i<m.second.size(); i++){
                    total_sum+=m.second[i];
                }
                for(int i=0; i<m.second.size(); i++){
                    int index=m.second[i];
                    postsum=total_sum-presum-index;

                    ans[index]+=(index*(long long)i);
                    ans[index]-=presum;
                    ans[index]-=(index*(long long)(m.second.size()-i-1));
                    ans[index]+=postsum;

                    presum+=index;
                }
                }
            }
        
        return ans;
    }
};