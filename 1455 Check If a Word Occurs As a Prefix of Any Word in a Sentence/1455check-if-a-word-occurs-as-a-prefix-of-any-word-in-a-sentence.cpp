class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        std::string curStr = "";
        int nWords = 1;

        for (int i = 0; i < sentence.size(); i++){
            char& c = sentence[i];
            
            if (c == ' '){
                curStr = "";
                nWords++;
            } else {
                curStr += c;

                if (curStr == searchWord) return nWords;
            }
        }

        return -1;
    }
};