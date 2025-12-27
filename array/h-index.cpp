class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size()==1)return 1;
    sort(citations.begin(), citations.end());
    int n=citations.size();
    int ans=0;
    for(int i=0; i<n; i++){
       if(citations[i]<= n-i)ans=max(ans,citations[i]);
    }
    return ans;
    }
};