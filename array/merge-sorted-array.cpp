class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       if(nums2.size()==0)return;
       if(nums1.size()==1)nums1=nums2;
    int j=nums2.size()-1;
       for(int i=nums1.size()-1; i>=m; i--){
        nums1[i]=nums2[j];
       if(j>=0) j--;
       }
       sort(nums1.begin(), nums1.end());

    }
};