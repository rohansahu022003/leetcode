class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<vector<int>>alpha(26);
        for(int i=0; i<s.size(); i++){
            int j=s[i]-'a';
            alpha[j].push_back(i);
        }

        int count=0;
        for(auto a:alpha){
            if(a.size()<=1)continue;
            unordered_set<char>seen;
            int i=a[0]+1;
            int j=a[a.size()-1];
            for(i; i<j;i++){
                   seen.insert(s[i]);
            }
            count+=seen.size();
        }
        return count;
    }
};