class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxvalue=0;
        int n=nums.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    long long I=nums[i];
                    long long J=nums[j];
                    long long K=nums[k];
                    long long value=(I-J)*K;
                    maxvalue=max(maxvalue,value);
                }
            }
        }
        return maxvalue;
    }
};