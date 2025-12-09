class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int>freq;
        int ans=0;
        for(auto num: nums){
           
           if(num==0 ){

           if(freq[0]>1) ans+=freq[0]-1;
           }
           else if(freq.count(num)){
               if(freq.count(num/2))ans+=freq[num/2];
            }
             freq[num]++;
        }
        return ans;
    }
};