class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res = 0;

        for (int i = 0; i < points.size() - 1; i++){
            int x1 = points[i][0], y1 = points[i][1];
            int x2 = points[i+1][0], y2 = points[i+1][1];

            int xDiff = std::abs(x1 - x2);
            int yDiff = std::abs(y1 - y2);

            res += std::max(xDiff, yDiff);
        }

        return res;
    }
};