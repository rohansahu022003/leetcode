class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>arr;

        for(auto n: nums){
            arr.push_back(to_string(n));
        }

        sort(arr.begin(),arr.end(),[](string& a,string& b){
            return a+b>b+a;
        });

      string ans="";

        for(auto x: arr){
            ans+=x;
        }
        return ans;
    }
};