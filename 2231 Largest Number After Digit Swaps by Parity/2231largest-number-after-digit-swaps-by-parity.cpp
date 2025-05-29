class Solution {
public:
    int largestInteger(int num) {
        std::string numStr = std::to_string(num);
        std::priority_queue<char> odds;
        std::priority_queue<char> evens;
        
        for (auto& c : numStr){
            if ( (c - '0') % 2 == 0){
                evens.push(c);
            } else {
                odds.push(c);
            }
        }

        std::string answerStr = "";

        for (auto&  c : numStr){
            if ( (c - '0') % 2 == 0){
                answerStr += evens.top();
                evens.pop();
            } else {
                answerStr += odds.top();
                odds.pop();
            }
        }

        return std::stoi(answerStr);
    }
};