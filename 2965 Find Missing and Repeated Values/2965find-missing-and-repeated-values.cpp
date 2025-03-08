class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        std::vector<int> found(n * n, 0);

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                found[grid[i][j] - 1] += 1;
            }
        }

        std::vector<int> answer = {0, 0};

        for (int i = 0; i < found.size(); i++){
            if (found[i] == 0){
                answer[1] = i + 1;
            } else if (found[i] > 1){
                answer[0] = i + 1;
            }
        }

        return answer;
    }
};