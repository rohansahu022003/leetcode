class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int>ans(n,-1);
        stack<int>st;
        unordered_map<int,int>next;

        for(auto num: nums2){
            while(!st.empty() && st.top()<num){
                next[st.top()]=num;
                st.pop();
            }
            st.push(num);
        }

        for(int i=0; i<nums1.size(); i++){
            if(next.count(nums1[i]))ans[i]=next[nums1[i]];
        }
        return ans;
    }
};