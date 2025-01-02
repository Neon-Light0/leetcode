class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        int leftScore = 0, rightScore = 0;

        leftScore = s[0] == '0' ? 1 : 0;

        for (int i = 1; i < s.size(); i++){
            if (s[i] == '1') rightScore += 1;
        }

        for (int i = 1; i < s.size(); i++){
            score = std::max(score, leftScore + rightScore);

            if (s[i] == '0'){
                leftScore += 1;
            } else {
                rightScore -= 1;
            }
        }

        return score;
    }
};