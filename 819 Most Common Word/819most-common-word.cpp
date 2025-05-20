class Solution {
private:
    std::string makeLower(const std::string& s){
        std::stringstream ss;
        
        for (auto& c : s){
            if (c >= 'A' && c <= 'Z'){
                ss << char(c + 32);
            } else {
                ss << c;
            }
        }

        return ss.str();
    }

public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        std::unordered_set<std::string> bannedSet;

        for (auto& word : banned){
            bannedSet.insert(makeLower(word));
        }

        std::string str = "";
        std::unordered_map<std::string, int> freq;

        for (int i = 0; i < paragraph.size(); i++){
            char& c = paragraph[i];

            if (std::isalpha(c)){
                str += char(std::tolower(c));
            } 

            if ((!std::isalpha(c) && !str.empty()) || i == paragraph.size() - 1){
                if (!bannedSet.contains(str)){
                    freq[str] += 1;
                }

                str = "";
            }
        }
        
        std::string mostFrequent = "";
        int highest = 0;

        for (auto& [word, count] : freq){
            if (count > highest){
                mostFrequent = word;
                highest = count;
            }
        }

        return mostFrequent;
    }
};