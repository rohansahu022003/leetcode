class Solution {
public:
    char kthCharacter(int k) {
        string word="a";

        while(word.length()<k){
            string oldword=word;
            for(auto c: oldword){
                c+=1;
                word.push_back(c);
            }
        }
        return word[k-1];
    }
};