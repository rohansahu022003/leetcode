class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,vector<int>>freq;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
             freq[nums[i]].push_back(i);
        }
        for(auto f: freq){
            if(f.first==0){
                 if(freq.count(f.first*2)){
             for(auto i:f.second){
                int right=0;
                for(auto j: freq[f.first*2]){
                    if(j>=i)right++;
                }
                int left=freq[f.first*2].size()-right;
                right--;
             ans+=right*left;
            }
                 }
            }
            else{
            if(freq.count(f.first*2)){
             for(auto i:f.second){
                int right=0;
                for(auto j: freq[f.first*2]){
                    if(j>i)right++;
                }
                int left=freq[f.first*2].size()-right;
             ans+=right*left;
             }
            
            }
            }
            
        }
        }
        return ans;
    }
};