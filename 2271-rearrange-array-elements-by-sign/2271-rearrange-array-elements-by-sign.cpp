class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int j=0,k=1;
        vector<int>rearranged(n,0);
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                rearranged[j]=nums[i];
                
                j+=2;
            }
            else{
                rearranged[k]=nums[i];
                k+=2;
            }
        }
       
        return rearranged;

    }
};