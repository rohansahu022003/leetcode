class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long ans;
        int n=nums.size();
        int negative=0;
        int zero=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)negative++;
            if(nums[i]==0)zero++;
        }
        if(zero==n-1)return 0;

        sort(nums.begin(),nums.end());
        if(negative==0)ans=pow(10,5)*nums[n-1]*nums[n-2];
        int i=0;
        int j=n-1;
        int arr[2]={0};
        if(negative>0){
            int k=2;
            while(k){
                if(abs(nums[i])>nums[j]){
                    arr[k-1]=abs(nums[i]);
                        i++;
                }
                    else{
                    arr[k-1]=nums[j];
                    j--;
                    }
                   k--; 
                }
            ans=pow(10,5)*arr[1]*arr[0];
            }
        
    
    return ans;
    }
};