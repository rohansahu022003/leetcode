class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x1=0;
        int sumx1=0;
        int x2=0;
        int sumx2=0;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
         sum+=nums[i];
        }
        int extra=sum%3;
        if(extra==0)return sum;
       else if(extra==1){
        for(int i=0; i<nums.size();i++){
            if(nums[i]%3==1){
                x1++;
                sumx1+=nums[i];
            }
            else if(nums[i]%3==2){
                x2++;
                sumx2+=nums[i];
        }
        if(x1==1){
            sum-=sumx1;
            break;
        }
        else if(x2==2){
            sum-=sumx2;
            break;
        }

       }
       }
       else if(extra==2){
         for(int i=0; i<nums.size();i++){
            if(nums[i]%3==1){
                x1++;
                sumx1+=nums[i];
            }
            else if(nums[i]%3==2){
                x2++;
                sumx2+=nums[i];
        }
        if(x1==2){
            sum-=sumx1;
            break;
        }
        else if(x2==1){
            sum-=sumx2;
            break;
        }
       }
       }


        
        return sum;
    }
};