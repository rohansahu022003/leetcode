class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
         sum+=nums[i];
        }
        int extra=sum%3;
        if(extra==0)return sum;

        while(extra!=0){
            if(find(nums.begin(),nums.end(),extra)!=nums.end()){
                sum-=extra;
                extra=0;
            }
            else{
                extra+=3;
            }


        }
        return sum;
    }
};