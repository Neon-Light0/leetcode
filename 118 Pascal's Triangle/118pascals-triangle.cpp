class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> res = {{1}};

        for (int i = 1; i < numRows; i++){
            std::vector<int> row = {1};
            std::vector<int> prev = res.back();

            for (int j = 0; j + 1 < prev.size(); j++){
                row.push_back(prev[j] + prev[j+1]);
            }

            row.push_back(1);
            res.push_back(row);
        }

        return res;
    }
};