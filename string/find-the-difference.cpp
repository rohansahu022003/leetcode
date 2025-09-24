class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>f;

        for(int i=0; i<t.size(); i++){
            f[t[i]]++;
        }

        for(int i=0; i<s.size(); i++){
            f[s[i]]--;
            if(f[s[i]]==0)f.erase(s[i]);
        }
      char ans;

      for(auto m: f){
        ans=m.first;
      }
      return ans;
    }
};