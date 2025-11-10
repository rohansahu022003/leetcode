class Solution {
public:
    int minOperations(vector<int>& nums) {
       int ans=0;
       vector<int>stack;

       for(auto num : nums){
        while(!stack.empty() && stack.back()>num){
            stack.pop_back();
        }
        if(num==0)continue;

        if(stack.empty() || stack.back()<num){
            ans++;
            stack.push_back(num);
        }
       }
       return ans;
    }
};