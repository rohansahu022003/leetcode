class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        using T=pair<int,int>;
        priority_queue<T>pq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto f : freq){
            pq.push({f.second,f.first});
        }
   vector<int>ans;
        while(k){
            int i=pq.top().second;
   ans.push_back(i);
      pq.pop();
      k--;
        }
     return ans;
    }
};