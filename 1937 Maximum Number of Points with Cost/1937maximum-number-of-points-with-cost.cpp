class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        std::vector<long long> prev;
        int col = points[0].size();

        for (int i = 0; i < col; i++){
            prev.push_back(points[0][i]);
        }

        for (int i = 0; i < points.size() - 1; i++){
            std::vector<long long> cur(col);
            std::vector<long long> left(col);
            std::vector<long long> right(col);

            left[0] = prev[0];
            right[col - 1] = prev[col - 1];

            for (int j = 1; j < col; j++){
                left[j] = std::max(left[j - 1] - 1, prev[j]);
            }

            for (int j = col - 2; j >= 0; j--){
                right[j] = std::max(right[j+1] - 1, prev[j]);
            }

            for (int j = 0; j < col; j++){
                cur[j] = points[i+1][j] + std::max(left[j], right[j]);
            }

            prev = cur;
        }

        long long score = 0;

        for (auto& num : prev){
            score = std::max(score, num);
        }

        return score;
    }
};