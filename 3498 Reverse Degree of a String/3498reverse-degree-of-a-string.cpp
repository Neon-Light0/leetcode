class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 1; i <= s.size(); i++){
            int reverse = 26 - (s[i - 1] - 'a');
            sum += (i * reverse);
        }

        return sum;
    }
};