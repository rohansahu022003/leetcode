class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
     vector<int>ans;
     for(int i=left; i<=right; i++){
        bool flag=true;
        string s=to_string(i);
        for(auto c: s){
        int k=c-'0';
        if(k==0){
            flag=false;
            break;
        }
        if(i%k!=0 && k!=0){
            flag=false;
            break;
        }
        }
        if(flag)ans.push_back(i);
     }   
     return ans;
    }
};