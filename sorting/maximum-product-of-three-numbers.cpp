class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
int k=3;
int result=1;
int i=nums.size()-1;
        while(k){
            result*=nums[i];
            i--;
            k--;

        }
        return result;
    }
};