class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double>ans;

        int n=nums.size();

        for(int i=0; i<n-k+1 ; i++){
            priority_queue<double>lower;
            priority_queue<double,vector<double>,greater<double>>upper;
            double sum;
            for(int j=i; j<k+i;j++){
                if(lower.empty() || nums[j]<=lower.top()){
                    lower.push(nums[j]);
                }
                else upper.push(nums[j]);

                if(lower.size()>upper.size()+1){
                    upper.push(lower.top());
                    lower.pop();
                }
                else if(lower.size()<upper.size()){
                    lower.push(upper.top());
                    upper.pop();
                }

            }

            if(lower.size()==upper.size()){
                sum=(lower.top()+upper.top())/2.0;
            }
            else sum=lower.top();
            ans.push_back(sum);
        }
        return ans;
    }
};