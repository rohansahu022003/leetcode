class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int i=0;
        int j=1;
       set<pair<int,int>>st;
        while(i<n-1 && j<n){
            if(i==j)j++;
            int diff=abs(nums[i]-nums[j]);
            if(diff<k)j++;
            else if(diff>k)i++;
            else{
               st.insert({nums[i],nums[j]});
                i++;
                j++;
            }
        }
        int count=st.size();
        return count;
    }
};