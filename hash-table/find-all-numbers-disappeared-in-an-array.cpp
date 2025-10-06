class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
      vector<bool>array(n+1,false);
      for(auto n:nums){
        array[n]=true;
      }  
      vector<int>ans;
      for(int i=1; i<=n; i++){
        if(array[i]==false){
            ans.push_back(i);
        }

      }
      return ans;
    }
};