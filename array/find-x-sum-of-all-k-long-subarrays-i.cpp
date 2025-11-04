class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0; i<n-k+1; i++){
            unordered_map<int,int>freq;
            priority_queue<pair<int,int>>pq;
            int sum=0;
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