class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        
        std::string answer;
        int cur = std::abs(num);
        
        while (cur > 0){
            answer += std::to_string(cur % 7);
            cur /= 7;
        }
        
        if (num < 0) answer += '-';
        
        std::reverse(answer.begin(), answer.end());
        
        return answer;
    }
};