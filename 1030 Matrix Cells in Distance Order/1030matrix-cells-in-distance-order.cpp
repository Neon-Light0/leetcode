class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        std::vector<std::vector<int>> answer;
        
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                answer.emplace_back(std::vector<int>{i, j});
            }
        }
        
        std::sort(answer.begin(), answer.end(), [rCenter, cCenter](const std::vector<int>& a, const std::vector<int>& b)->bool{
            int dist1 = std::abs(a[0] - rCenter) + std::abs(a[1] - cCenter);
            int dist2 = std::abs(b[0] - rCenter) + std::abs(b[1] - cCenter);
            return dist1 < dist2;
        });
        
        return answer;
    }
};