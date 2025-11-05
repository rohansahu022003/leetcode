class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double>ans;
        multiset<double>window;
        int n=nums.size();
        double sum;
        for(int i=0; i<n; i++){
           if (window.size()<k)window.insert(nums[i]);
           else if(i>=k){
            window.erase(window.find(nums[i-k]));
            window.insert(nums[i]);
           }
           if(window.size()==k){
            auto it=window.begin();
            advance(it,k/2);

            if(k%2==0){
                auto it2=it;
                it2--;
                sum=(*it+*it2)/2.0;
                ans.push_back(sum);

            }
            else{
                sum=*it;
                ans.push_back(sum);
            }
           }

        }
        return ans;
    }
};