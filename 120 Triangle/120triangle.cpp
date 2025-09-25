class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        std::vector<std::vector<int>> dp;
        dp.push_back(triangle[0]);

        for (std::size_t i = 1; i < triangle.size(); i++){
            std::vector<int> row;

            for (std::size_t j = 0; j < triangle[i].size(); j++){
                if (j == 0){
                    row.push_back(dp[i - 1][0] + triangle[i][j]);
                } else if (j == triangle[i].size() - 1){
                    row.push_back(dp[i - 1][dp[i - 1].size() - 1] + triangle[i][j]);
                } else {
                    row.push_back(std::min(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j]);
                }
            }

            dp.push_back(row);
        }

        const auto& lastRow = dp[dp.size() - 1];

        return *std::min_element(lastRow.begin(), lastRow.end());
    }
};