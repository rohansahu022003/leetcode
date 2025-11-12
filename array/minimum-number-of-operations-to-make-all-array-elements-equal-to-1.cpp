class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
       int num0=0,overall=0;
       for(auto num: nums){
        if(num==1)num0++;
        overall=gcd(overall,num);
       }
       if(num0>0)return n-num0;
       else if(overall>1)return -1;

       int mingcd=n;
       for(int i=0; i<n-1; i++){
        int g=nums[i];
        for(int j=i+1; j<n; j++){
            g=gcd(g,nums[j]);
            if(g==1){
                mingcd=min(mingcd,j-i);
                break;
            }
        }
       }
       return n-mingcd+1;
    }
};