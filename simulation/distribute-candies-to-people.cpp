class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>ans(num_people,0);
        int i=0;
        int j=1;
        while(candies){
        ans[i]+=j;
        candies-=j;
        j++;
        if(j>candies)j=candies;
        i=(i+1)%num_people;
        }
        return ans;
    }
};