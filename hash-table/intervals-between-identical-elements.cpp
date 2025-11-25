class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        int n=arr.size();
        vector<long long>ans(n);
        unordered_map<int,vector<long long>>mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]].push_back(i);
        }

        for(auto m:mpp){
            vector<long long>p(m.second);
            int s=p.size();
            if(s==1)continue;
            else{
                long long total_sum=0,presum=0,postsum=0;
                for(auto i:p)total_sum+=i;
                for(long long i=0;i<s;i++){
                    postsum=total_sum-presum-p[i];

                    ans[p[i]]+=(p[i]*i);
                    ans[p[i]]-=presum;
                    ans[p[i]]-=(p[i]*(s-i-1));
                    ans[p[i]]+=postsum;

                    presum+=p[i];
                }
            }
        }
        return ans;
    }
};