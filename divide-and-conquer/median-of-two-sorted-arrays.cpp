class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       nums1.insert(nums1.end(),nums2.begin(), nums2.end());

        sort(nums1.begin(), nums1.end());
        int n=nums1.size();
double ans=0;
        if(n%2==1)ans=nums1[n/2];
        else ans=(nums1[n/2]+nums1[n/2-1])/2.0;
        return ans;
    }
};