class Solution {
private:
    bool isPrefix(const std::string& word1, const std::string& word2){
        if (word1.size() > word2.size()) return false;

        for (int i = 0; i < word1.size(); i++){
            if (word1[i] != word2[i]){
                return false;
            }
        }

        return true;
    }

    bool isSuffix(const std::string& word1, const std::string& word2){
        if (word1.size() > word2.size()) return false;

        for (int i = word1.size() - 1; i >= 0; i--) {
            if (word1[i] != word2[word2.size() - word1.size() + i]){
                return false;
            }
        }

        return true;
    }

public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;

        for (int i = 0; i < words.size() - 1; i++){
            for (int j = i + 1; j < words.size(); j++){
                if (isPrefix(words[i], words[j]) && isSuffix(words[i], words[j])){
                    count += 1;
                }
            }
        }

        return count;
    }
};