class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;

        for (int i = 1; i < s.size(); i++){
            score += std::abs(static_cast<int>(s[i] - s[i-1]));
        }

        return score;
    }
};