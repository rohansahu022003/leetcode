class Solution {
    public:
    int isdn(int num){
        int n=num;
        while(n){
            int temp=n%10;
            if(!temp || num%temp)return false;
            n/=10;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
     vector<int>ans;
     for(int i=left; i<=right; i++){
        if(isdn(i))ans.push_back(i);
     }   
     return ans;
    }
};