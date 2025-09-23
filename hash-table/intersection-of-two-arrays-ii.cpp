class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>freq;

        for(int i=0; i<nums1.size(); i++){
            freq[nums1[i]]++;
        }
        vector<int>ans;
        for(int i=0; i<nums2.size(); i++){
            if(freq.find(nums2[i])!=freq.end()){
                ans.push_back(nums2[i]);
                freq[nums2[i]]--;
                if(freq[nums2[i]]==0)freq.erase(nums2[i]);
            }
        }
        return ans;
    }
};
    