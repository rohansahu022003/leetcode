class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0; i<=n; i++){
            int num=i;
        int sum=0;
         while(num){
            if(num%2==1){
                sum++;
            };
            num/=2;
         }
         ans.push_back(sum);

        }
        return ans;
    }
};