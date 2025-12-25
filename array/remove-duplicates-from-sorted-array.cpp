class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        for(int i=0; i<nums.size(); i++){
         st.insert(nums[i]);
        }
        vector<int>n;
        for(auto s:st){
            n.push_back(s);
        }
        nums=n;
        int ans=st.size();
        return ans;
    }
};