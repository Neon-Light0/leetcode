class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int answer = 0;

        for (std::size_t i = 1; i < points.size(); i++ ){
            int xDiff = std::abs(points[i][0] - points[i-1][0]);
            int yDiff = std::abs(points[i][1] - points[i-1][1]);

            answer += std::max(xDiff, yDiff);
        }

        return answer;
    }
};