class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string>ans;
        string m="";
        for(int i=0; i<n; i++){
        if(m.empty() && s[i]==' ')continue;
        else if(s[i]!=' ')m+=s[i];
        else if(!m.empty() && s[i]==' '){
            ans.push_back(m);
            m="";
        }
      

        }
          if(!m.empty())ans.push_back(m);
        string result;
        reverse(ans.begin(), ans.end());
        for(int i=0; i<ans.size(); i++){
            result+=ans[i];
            if(i!=ans.size()-1)result+=" ";
        }
        return result;
    }
};