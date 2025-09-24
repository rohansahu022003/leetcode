class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mn1,mn2;
        int mx1,mx2,mx3;

        mn1=mn2=INT_MAX;
        mx1=mx2=mx3=INT_MIN;

        for(int&x:nums) {
            //3 maximum numbers
            if(x>mx1) {
                mx3=mx2;
                mx2=mx1;
                mx1=x;
            } else if (x>mx2) {
                mx3=mx2;
                mx2=x;
            } else if(x>mx3) {
                mx3=x;
            }

            //2 mininum numbers
            if(x<mn1) {
                mn2=mn1;
                mn1=x;
            } else if (x<mn2) {
                mn2=x;
            } 
        }
        return max({mx1*mx2*mx3, mn1*mn2*mx1});
    }
};