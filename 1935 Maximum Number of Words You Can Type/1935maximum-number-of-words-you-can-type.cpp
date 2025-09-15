class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        std::unordered_set<char> brokenKeys(brokenLetters.begin(), brokenLetters.end());
        std::stringstream ss(text);
        std::string token;

        while (ss >> token){
            bool add = true;

            for (const char& c : token){
                if (brokenKeys.contains(c)){
                    add = false;
                    break;
                }
            }

            if (add) count += 1;
        }

        return count;
    }
};