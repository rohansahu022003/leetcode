class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
       stack<int>st;
       unordered_map<int,int>next;
        vector<int>ans(n,-1);
        for(int i=0; i<2*n; i++){
            while(!st.empty() && st.top()< nums[i%n]){
                next[st.top()]=nums[i%n];
                st.pop();
            }
            st.push(nums[i%n]);
        }
        for(int i=0 ; i<n; i++){
            if(next.count(nums[i]))ans[i]=next[nums[i]];
        }
        return ans;
    }
};