class Solution {
    private:
    int gcd(int a,int b){

        if(a==0)return b;
        else if(b==0)return a;
        else if(a==b)return a;

        else if(a>b) return gcd(a-b,b);
    return gcd(a,b-a);



    }
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[nums.size()-1];
      return  gcd(a,b);
    }
};