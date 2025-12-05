class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
     vector<vector<int>>ans;
  priority_queue<int,vector<int>,greater<int>>pq1;
  priority_queue<int,vector<int>,greater<int>>pq2;

  for(auto num: nums1)pq1.push(num);
  for(auto num: nums2)pq2.push(num);
  int x=pq1.top();
  pq1.pop();
  int y=pq2.top();
  pq2.pop();
  ans.push_back({x,y});
  while(k-1){
   if(pq1.top()>=pq2.top()){
    y=pq2.top();
    pq2.pop();
   }
   else{
    x=pq1.top();
    pq1.pop();
   }
   ans.push_back({x,y});
   k--;
  }
  return ans;
    }
};