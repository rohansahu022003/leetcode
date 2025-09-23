class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums2.size()==0)return;
        if(nums1.size()==1 && nums2.size()==1)nums1=nums2;
        int j=0;
        for(int i=nums1.size()-1; i>=0; i--){
            if(nums1[i]==0 && j<nums2.size())nums1[i]=nums2[j++];
            else {
                break;
            }
        }
        sort(nums1.begin(), nums1.end());

    }
};