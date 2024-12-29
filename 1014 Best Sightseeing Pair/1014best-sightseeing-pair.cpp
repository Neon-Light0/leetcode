class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxLeft = values[0];
        int max = INT_MIN;

        for (int j = 1; j < values.size(); j++){
            int maxRight = values[j] - j;
            max = std::max(max, maxLeft + maxRight);
            maxLeft = std::max(maxLeft, values[j] + j);
        }

        return max;
    }
};