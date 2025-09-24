class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx1=INT_MIN, mx2=INT_MIN;
        int ind =0;

        for(int i=0; i<nums.size(); i++ ){
            int x=nums[i];
            if(x>mx1){
                mx2=mx1;
                mx1=x;
                ind=i;
            }
            else if(x>mx2){
                mx2=x;
            }
        }
        if(mx1/mx2>=2)return ind;
        return -1 ;
    }
};