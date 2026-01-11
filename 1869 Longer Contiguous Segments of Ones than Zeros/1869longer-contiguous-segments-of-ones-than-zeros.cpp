class Solution {
public:
    bool checkZeroOnes(string s) {
        int longestOnes = 0;
        int longestZeroes = 0;
        int zeroes = 0;
        int ones = 0;

        for (char c : s) {
            if (c == '1') {
                zeroes = 0;
                ones += 1;
                longestOnes = std::max(longestOnes, ones);
            } else {
                ones = 0;
                zeroes += 1;
                longestZeroes = std::max(longestZeroes, zeroes);
            }
        }

        return longestOnes > longestZeroes;
    }
};