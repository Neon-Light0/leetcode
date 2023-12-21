class Solution {
public:
    string convertToTitle(int columnNumber) {
        std::string answer;
        
        while (columnNumber ){
            columnNumber--;
            char c = static_cast<char>(columnNumber % 26 + int('A'));
            answer = c + answer;
            columnNumber /= 26;
        }
        
        return answer;
    }
};