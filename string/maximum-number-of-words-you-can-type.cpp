class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
        int k=0;
        int numberofwords=1;

        for(int i=0; i<text.length(); i++){
            if(brokenLetters.find(text[i])!=string::npos && k==0){
                count++;
                k=1;
            }
            else if (text[i]==' '){
                k=0;
                numberofwords++;

            }
        }
        return numberofwords-count;
    }
};