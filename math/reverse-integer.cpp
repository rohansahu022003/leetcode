class Solution {
public:

      int reverse(int x) {
        int revnum = 0;
        
        while (x != 0) {  // ✅ Works for both positive and negative numbers
            int digit = x % 10;

            // ✅ Check for overflow before updating `revnum`
            if (revnum > INT_MAX / 10 || revnum < INT_MIN / 10) {
                return 0;  // Return 0 if overflow happens
            }

            revnum = (revnum * 10) + digit;
            x /= 10;
        }

        return revnum; // ✅ No need to manually handle negative numbers
    }
    
       
    };
