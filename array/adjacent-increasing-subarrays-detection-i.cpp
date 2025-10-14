class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if(k==1)return true;
        int i=0;
        int j=k;
        int sub1=0;
        int sub2=0;
        int ind1=i;
        int ind2=j;
        while(j+k<nums.size()){
            if(nums[ind1]<nums[ind1+1] && sub1<2){
                sub1++;
                ind1++;
            }
            else if(nums[ind2]<nums[ind2+1] && sub1==2 && sub2<2){
                sub2++;
                ind2++;
            }
            else if(sub1==2 && sub2==2)return true;

            else{
                i++;
                j++;
                ind1=i;
                ind2=j;
                sub1=0;
                sub2=0;
            }


        }
        return false;
    }
};