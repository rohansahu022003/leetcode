class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        int maxfreq=INT_MIN;
        int ans=0;

        for(auto f: freq){
            if(f.second>maxfreq){
                maxfreq=max(maxfreq,f.second);
                ans=0;
                ans+=f.second;
            }
            else if(f.second==maxfreq)ans+=f.second;
        }
        return ans;
    }
};