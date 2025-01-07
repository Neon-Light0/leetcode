class Solution {
private: 
    bool isSubstring(const std::string& sub, const std::string& s){
        if (sub.size() > s.size()) return false;

        return s.find(sub) != std::string::npos;
    }

public:
    vector<string> stringMatching(vector<string>& words) {
        std::vector<std::string> answer;

        for (int i = 0; i < words.size(); i++){
            for (int j = 0; j < words.size(); j++){
                if (i == j) continue;

                if (isSubstring(words[i], words[j])){
                    answer.push_back(words[i]);
                    break;
                }
            }
        }

        return answer;
    }
};