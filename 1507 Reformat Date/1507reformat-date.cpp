class Solution {
public:
    string reformatDate(string date) {
        std::string answer = "";
        
        std::unordered_map<std::string, std::string> monthMap = {{"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"},
                                                                 {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}};
        std::vector<std::string> tokens;
        std::string token;
        std::stringstream ss(date);
        char delimiter = ' ';

        while (std::getline(ss, token, delimiter)) {
            tokens.push_back(token);
        }

        answer += tokens[2];
        answer += "-";
        answer += monthMap[tokens[1]];
        answer += "-";
        if (tokens[0].size() < 4) answer += "0";
        answer += tokens[0].substr(0, tokens[0].size() - 2);

        return answer;
    }
};