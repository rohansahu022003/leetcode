class Solution {
public:
    int lengthOfLastWord(string s) {
  stringstream ss(s);
  string word;
  while(ss>>word){};

  int len=word.size();
  return len;
    }
};