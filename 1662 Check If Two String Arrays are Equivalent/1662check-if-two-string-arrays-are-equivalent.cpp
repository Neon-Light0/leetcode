class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        std::string w1, w2;

        for (std::size_t i = 0; i < word1.size(); i++ ){
            w1 += word1[i];
        }

        for (std::size_t i = 0; i < word2.size(); i++){
            w2 += word2[i];
        }

        return w1 == w2;
    }
};