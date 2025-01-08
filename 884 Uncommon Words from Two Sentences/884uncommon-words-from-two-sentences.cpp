class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        std::unordered_map<std::string, std::pair<int, int>> words;
        std::string word = "";

        for (int i = 0; i < s1.size(); i++){
            if (s1[i] == ' '){
                words[word].first += 1;
                word = "";
            } else {
                word += s1[i];
            }
        }

        if (word.size()) {
            words[word].first += 1;
            word = "";
        }

        word = "";

        for (int i = 0; i < s2.size(); i++){
            if (s2[i] == ' '){
                words[word].second += 1;
                word = "";
            } else {
                word += s2[i];
            }
        } 

        if (word.size()) {
            words[word].first += 1;
            word = "";
        }
        
        std::vector<std::string> answer;

        for (auto& [key, val] : words){
            int first = val.first, second = val.second;
            std::cout << first << ", " << second << std::endl;
            if ( (first == 0 && second == 1) || (first == 1 && second == 0)){
                answer.push_back(key);
            }
        }

        return answer;
    }
};