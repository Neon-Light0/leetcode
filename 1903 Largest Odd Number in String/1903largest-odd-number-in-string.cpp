class Solution {
public:
    string largestOddNumber(string num) {
        std::string answer = "";
        
        for (std::size_t i = num.size() - 1; i != std::string::npos; i-- ){
            if ( ( (int)num[i] - '0') % 2 != 0){
                answer = num.substr(0, i + 1);
                break;
            }
        }
        
        return answer;
    }
};