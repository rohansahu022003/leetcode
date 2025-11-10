class Solution {
public:
    int minOperations(vector<int>& nums) {
       int ans=0;
       stack<int>stack;

       for(auto num : nums){
        while(!stack.empty() && stack.top()>num){
            stack.pop();
        }
        if(num==0)continue;

        if(stack.empty() || stack.top()<num){
            ans++;
            stack.push(num);
        }
       }
       return ans;
    }
};