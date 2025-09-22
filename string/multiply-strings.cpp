class Solution {
public:
    string multiply(string num1, string num2) {
        long long a=stoll(num1);
        long long b=stoll(num2);

        string answer=to_string(a*b);
        return answer;
    }
};