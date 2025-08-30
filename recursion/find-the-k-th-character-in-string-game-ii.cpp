class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        long long len = 1; 
        int n = operations.size();
        
        // compute final length capped at something larger than k
        for (int i = 0; i < n; i++) {
            if (len > k) break;
            len *= 2;
        }
        
        int shift = 0;  // track how many times character was incremented
        
        for (int i = n - 1; i >= 0; i--) {
            long long half = len / 2;
            if (k > half) {
                k -= half;
                if (operations[i] == 1) shift++;
            }
            len /= 2;
        }
        
        char ans = 'a' + (shift % 26);
        return ans;
    }
};
