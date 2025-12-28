class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>freqr;
        unordered_map<char,int>freqm;

        for(int i=0; i<ransomNote.size(); i++){
            freqr[ransomNote[i]]++;
        }
         for(int i=0; i<magazine.size(); i++){
            freqm[magazine[i]]++;
        }

        for(auto f:freqr){
            if(freqm.find(f.first)==freqm.end())return false;
            else{
                if(f.second>freqm[f.first])return false;
            }
        }
return true;
    }
};