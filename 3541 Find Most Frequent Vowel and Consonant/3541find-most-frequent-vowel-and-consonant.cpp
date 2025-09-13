class Solution {
private:
    bool isVowel(char c){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='u'){
            return true;
        }

        return false;
    }

public:
    int maxFreqSum(string s) {
        std::unordered_map<char, int> vowelCounts;
        std::unordered_map<char, int> consonantCounts;
        char maxVowel = 'a', maxConsonant = 'a';
        int maxVowelCount = 0, maxConsonantCount = 0;

        for (auto& c : s){
            if (isVowel(c)){
                vowelCounts[c] += 1;

                if (vowelCounts[c] > maxVowelCount){
                    maxVowelCount = vowelCounts[c];
                    maxVowel = c;
                }

            } else {
                consonantCounts[c] += 1;

                if (consonantCounts[c] > maxConsonantCount){
                    maxConsonantCount = consonantCounts[c];
                    maxConsonant = c;
                }
            }
        }

        return (maxConsonantCount + maxVowelCount);
    }
};