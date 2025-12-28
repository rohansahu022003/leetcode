class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>freq;

        for(auto s:strs){
            string key=s;
        sort(key.begin(),key.end());
            freq[key].push_back(s);
        }

        vector<vector<string>>ans;

        for(auto f:freq){
         ans.push_back(f.second);
        }

        return ans;
    }
};