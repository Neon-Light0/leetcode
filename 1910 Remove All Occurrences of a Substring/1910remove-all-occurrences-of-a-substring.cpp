class Solution {
public:
    string removeOccurrences(string s, string part) {
        std::string answer = s;
        std::size_t i = answer.find(part);

        while (i != std::string::npos){
            for (int j = i; j < (answer.size() - part.size()); j++){
                answer[j] = answer[j + part.size()];
            }

            answer.resize(answer.size() - part.size());
            i = answer.find(part);
        }

        return answer;
    }
};