class Solution {
private:
    bool isVowel(char c){
        c = std::tolower(c);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='u'){
            return true;
        } else {
            return false;
        }
    }

    bool caseInsensitiveCompare(const std::string& s1, const std::string& s2){
        if (s1.size() != s2.size()) return false;

        for (int i = 0; i < s1.size(); i++){
            if (std::tolower(s1[i]) != std::tolower(s2[i])){
                return false;
            }
        }

        return true;
    }

    bool vowelInsensitiveCompare(const std::string& s1, const std::string& s2){
        if (s1.size() != s2.size()) return false;

        for (int i = 0; i < s1.size(); i++){
            if (isVowel(s1[i]) && isVowel(s2[i])) continue;

            if (std::tolower(s1[i]) != std::tolower(s2[i])){
                return false;
            }
        }

        return true;
    }

public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        std::vector<string> res;
        std::unordered_set<std::string> words;

        for (const auto& word : wordlist){
            words.insert(word);
        }

        for (const auto& query : queries){
            std::string match = "";

            if (words.contains(query)){
                match = query;
            } else {
                for (const auto& word : wordlist){
                    if (caseInsensitiveCompare(query, word)){
                        match = word;
                        break;
                    } 
                }

                if (match.empty()){
                    for (const auto& word : wordlist){
                        if (vowelInsensitiveCompare(query, word)){
                            match = word;
                            break;
                        }
                    }
                }
            }

            res.push_back(match);
        }

        return res;
    }
};