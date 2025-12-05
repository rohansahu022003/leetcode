class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
     vector<vector<int>>ans;
  using T=pair<int,pair<int,int>>;
  priority_queue<T,vector<T>,greater<T>>minimum;

  minimum.push({nums1[0]+nums2[0],{0,0}});

  while(k){
    int i=minimum.top().second.first;
    int j=minimum.top().second.second;
    minimum.pop();
   if(j+1<nums2.size())minimum.push({nums1[i]+nums2[j+1],{i,j+1}});
    if(j==0 && i+1<nums1.size()){
        minimum.push({nums1[i+1]+nums2[j],{i+1,j}});
    }
    ans.push_back({nums1[i],nums2[j]});
    k--;
  }
  
  return ans;
    }
};