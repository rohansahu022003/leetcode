class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n= nums.size();
    int missing;
    vector<int>hash(n+1,0);

    for(int i=0; i<n; i++){
        hash[nums[i]]++;
    }
    for(int i=0; i<n+1; i++){
        if(hash[i]==0){
            missing=i;
            break;
        }
    }
    return missing;
    }
};