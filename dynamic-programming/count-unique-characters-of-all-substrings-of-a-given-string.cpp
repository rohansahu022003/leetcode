class Solution {
   
public:
    int uniqueLetterString(string s) {
        int n=s.size();
       vector<int>prev(n,-1),next(n,n);
       unordered_map<char,int>last;

       for(int i=0; i<n; i++){
        if(last.count(s[i])){
            prev[i]=last[s[i]];
        }
        last[s[i]]=i;
       }

       last.clear();

       for(int i=n-1; i>=0;i--){
        if(last.count(s[i])){
            next[i]=last[s[i]];
        }
        last[s[i]]=i;
       }
       int sum=0;
       for(int i=0; i<n; i++){
        long long left=i-prev[i];
        long long right=next[i]-i;
        sum+= left*right;
       }
        return (int)sum;
    }
};