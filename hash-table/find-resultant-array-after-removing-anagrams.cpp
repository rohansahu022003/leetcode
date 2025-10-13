class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
     int i=0;
     int j=1;
     while(j<words.size()){
        string real=words[i];
        string real2=words[j];
        sort(real.begin(), real.end());
        sort(real2.begin(), real2.end());
        string p=real;
        string q=real2;
        if(p==q){
            words.erase(words.begin()+i+1, words.begin()+j+1);
        }

        else {
            i++;
            j++;
        }
     }
     return words;
    }
};