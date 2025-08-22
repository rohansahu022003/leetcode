class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n=wordList.size();
     
        unordered_set<string>wordlist(wordList.begin(), wordList.end());

        queue<pair<string,int>>q;
        if(find(wordList.begin(),wordList.end(), endWord)==wordList.end()){
            return 0;
        }
        int level=1;
        q.push({beginWord,level});
        wordlist.erase(beginWord);
        while(!q.empty()){
            string word=q.front().first;
            int level=q.front().second;
            int size=word.length();
            q.pop();
             if (word == endWord) return level; 

            for(int i=0; i<size; i++){
                char original=word[i];
                for(char j='a'; j<='z'; j++){
                    if(j==original)continue;
                    word[i]=j;
                    if(wordlist.find(word)!=wordlist.end() ){
                        q.push({word,level+1});
                        wordlist.erase(word);
                    }
                }
                word[i]=original;
               
            }
        }
        return 0;
        
    }
};