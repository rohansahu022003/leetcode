class Solution {
public:
    vector<long long> findXSum(vector<int>& nums, int k, int x) {
        vector<long long>ans;
        int n=nums.size();
        for(int i=0; i<n-k+1; i++){
            unordered_map<long long,long long>freq;
            priority_queue<pair<long long,long long>>pq;
            long long sum=0;
            int j=0;
            vector<int>temp(nums.begin()+i, nums.begin()+k+i);
            for(auto t:temp)freq[t]++;
            for(auto f:freq)pq.push({f.second,f.first});
            while(j<x && !pq.empty()){
                auto[fr,nu]=pq.top();
                pq.pop();
                sum+=fr*nu;
                j++;
            }
            ans.push_back(sum);

        }
        return ans; 
    }
};