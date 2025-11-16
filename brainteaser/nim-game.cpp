class Solution {
public:
    bool canWinNim(int n) {
        int low=n/3;
        int high=ceil(n/3.0);
        if(low%2==1 & high%2==0)return false;
        return true;
    }
};