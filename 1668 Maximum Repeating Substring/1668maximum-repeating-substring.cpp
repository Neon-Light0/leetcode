class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int answer = 0;
        std::string temp = word;
        
        while (sequence.find(temp) != std::string::npos){
            temp += word;
            answer++;
        }
        
        return answer;
    }
};