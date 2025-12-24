class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0;
        for(auto a:apple){
            sum+=a;
        }
        sort(capacity.begin(), capacity.end());
int count=0;
        for(int i=capacity.size()-1; i>=0; i--){
          sum-=capacity[i];
          count++;
          if(sum<=0)break;
        }

        return count;
    }
};