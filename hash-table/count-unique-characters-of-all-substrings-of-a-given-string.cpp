class Solution {
    private:
    void countuniquechars(string s,int& sum){
       map<char,int>mpp;
       for(auto c: s){
        mpp[c]++;
       }
       for(auto m: mpp){
        if(m.second==1)sum++;
       }
    }
public:
    int uniqueLetterString(string s) {
        int sum=0;
        int n=s.length();
        for(int i=0; i<s.length(); i++){
            for(int j=1; j<=n; j++){
                countuniquechars(s.substr(i,j),sum);

            }
            n--;
        }
        return sum;
    }
};