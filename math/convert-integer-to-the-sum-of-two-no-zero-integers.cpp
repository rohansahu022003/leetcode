class Solution {
    private:
    bool nozero(int x){
        while(x){
            int digit=x%10;
            x/=10;
            if(digit==0)return false;
        }
        return true;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        for(int i=1; i<=n; i++){
            int a=i;
            int b=n-i;

            if(nozero(a) && nozero(b)){
                ans.push_back(a);
                ans.push_back(b);
                break;
            }

        }
        return ans;
    }
};