class Solution {
public:
    string discountPrices(string sentence, int discount) {
        std::stringstream answer;; 
        std::size_t n = sentence.size();

        for (std::size_t i = 0; i < n; i++){
            if (sentence[i] != ' ' && i > 0 && sentence[i-1] == '$' && (i == 1 || sentence[i-2] == ' ')){
                std::string temp;
                bool isNumber = true;

                for (; i < n && sentence[i] != ' '; i++){
                    temp += sentence[i];

                    if (!isdigit(sentence[i])){
                        isNumber = false;
                    }
                }

                if (isNumber && !temp.empty()){
                    answer << std::fixed << std::setprecision(2) << (std::stod(temp) * (1 - discount / 100.0));
                } else {
                    answer << temp;
                }

                i--;
            } else {
                answer << sentence[i];
            }
        }

        return answer.str();
    }
};