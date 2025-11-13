class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        set<pair<int,pair<int,pair<int,int>>>>st;

        int n=nums.size();
        for(int i=0; i<n-3; i++){
            for(int j=i+1;j<n-2;j++){
                int k=j+1;
                int m=n-1;
                while(k<m){
                int a=nums[i];
                int b=nums[j];
                int c=nums[k];
                int d=nums[m];
                int sum=a+b+c+d;

                if(sum==target && st.find({a,{b,{c,d}}})==st.end()){
                    st.insert({a,{b,{c,d}}});
                    ans.push_back({a,b,c,d});
                    k++;
                    m--;
                }
                else if(sum<target)k++;
                else m--;
                }
            }
        }
        return ans;
    }
};