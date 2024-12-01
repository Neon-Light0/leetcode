class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        std::vector<std::vector<int>> strength;

        for (int r = 0; r < mat.size(); r++){
            int sum = 0;

            for (int c = 0; c < mat[0].size(); c++){
                sum += mat[r][c];
            }

            strength.push_back({r, sum});
        }

        std::sort(strength.begin(), strength.end(), [&strength](const std::vector<int>& a, const std::vector<int>& b){
            if (a[1] == b[1]) {
                return a[0] < b[0];
            } else {
                return a[1] < b[1];
            }
        });

        std::vector<int> answer;

        for (int i = 0; i < k; i++){
            answer.push_back(strength[i][0]);
        }

        return answer;
    }
};