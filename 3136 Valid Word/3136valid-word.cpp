class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return false;

        bool hasVowel = false, hasConsonant = false;

        for (char& c : word){
            if (!std::isalnum(c)){
                return false;
            }

            if (std::isalpha(c)){
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            }
        }

        return hasVowel && hasConsonant;
    }
};