class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        std::vector<int> rowMin(n + 1, INT_MAX);
        std::vector<int> rowMax(n + 1, INT_MIN);
        std::vector<int> colMin(n + 1, INT_MAX);
        std::vector<int> colMax(n + 1, INT_MIN);

        for (const auto& pos : buildings){
            int x = pos[0], y = pos[1];

            rowMin[x] = std::min(rowMin[x], y);
            rowMax[x] = std::max(rowMax[x], y);

            colMin[y] = std::min(colMin[y], x);
            colMax[y] = std::max(colMax[y], x);
        }
        
        int count = 0;

        for (const auto& pos : buildings){
            int x = pos[0], y = pos[1];

            if (rowMin[x]< y && rowMax[x] > y && colMin[y] < x && colMax[y] > x){
                count += 1;
            }
        }

        return count;
    }
};