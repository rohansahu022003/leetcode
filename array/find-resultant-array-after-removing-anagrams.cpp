class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
       unordered_set<string>st;
       vector<string>ans;

       for(auto c: words){
        string real=c;
        sort(c.begin(), c.end());
        if(st.find(c)==st.end()){
            ans.push_back(real);
            st.insert(c);

        }
        
       } 

      

       return ans;
    }
};