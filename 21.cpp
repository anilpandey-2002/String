class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int id = 1, n = searchWord.size();
        for (size_t i = 0; i < sentence.size(); ++i) {
            if (sentence[i] == ' ') ++id;
            else if (sentence.substr(i, n) == searchWord && 
                     (i + n == sentence.size() || sentence[i + n] == ' ')) 
                return id;
        }  return -1;
    }
};
//Check If a Word Occurs As a Prefix of Any Word in a Sentence