class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        std::vector<std::vector<int>> answer;

        if (m * n != original.size()) return answer;

        for (int i = 0; i < m; i++){
            std::vector<int> row(n);

            for (int j = 0; j < n; j++){
                row[j] = original[i * n + j];
           }

           answer.push_back(row);
        }

        return answer;
    }
};