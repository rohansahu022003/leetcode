#include <map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int counts[256] = {0};
        for (int right = 0, left = 0; right < s.length(); right++) {
            counts[s[right]]++;
            while (counts[s[right]] > 1) {
                counts[s[left++]]--;
            }
            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
            }
        }
        return maxLen;
    }
};