class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);

       string word;
       vector<string>w;
       while(ss>>word){
        w.push_back(word);
       }

       reverse(w.begin(), w.end());

       string ans="";

       for(int i=0;i<w.size(); i++){
        ans+=w[i];
        if(i!=w.size()-1)ans+=" ";
       }

       return ans;
    }
};