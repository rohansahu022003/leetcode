class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        for (int x : nums) sum += x;

        int extra = sum % 3;
        if (extra == 0) return sum;

        int min1_mod1 = INT_MAX, min2_mod1 = INT_MAX;
        int min1_mod2 = INT_MAX, min2_mod2 = INT_MAX;

        for (int x : nums) {
            if (x % 3 == 1) {
                if (x < min1_mod1) {
                    min2_mod1 = min1_mod1;
                    min1_mod1 = x;
                } else if (x < min2_mod1) {
                    min2_mod1 = x;
                }
            } 
            else if (x % 3 == 2) {
                if (x < min1_mod2) {
                    min2_mod2 = min1_mod2;
                    min1_mod2 = x;
                } else if (x < min2_mod2) {
                    min2_mod2 = x;
                }
            }
        }

       
        if (extra == 1) {
            int option1 = (min1_mod1 == INT_MAX ? -1 : sum - min1_mod1);
            int option2 = (min1_mod2 == INT_MAX || min2_mod2 == INT_MAX ? -1 : sum - (min1_mod2 + min2_mod2));
            return max(option1, option2);
        }

        else { 
            int option1 = (min1_mod2 == INT_MAX ? -1 : sum - min1_mod2);
            int option2 = (min1_mod1 == INT_MAX || min2_mod1 == INT_MAX ? -1 : sum - (min1_mod1 + min2_mod1));
            return max(option1, option2);
        }
    }
};
