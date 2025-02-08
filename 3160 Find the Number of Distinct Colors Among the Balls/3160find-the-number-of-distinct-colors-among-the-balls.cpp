class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        std::vector<int> result;
        std::unordered_map<int, int> colorsMap;
        std::unordered_map<int, int> ballsMap;

        for (int i = 0; i < queries.size(); i++){
            int ball = queries[i][0], color = queries[i][1];

            if (!ballsMap.contains(ball)){
                ballsMap[ball] = color;
                colorsMap[color] += 1;
            } else {
                int curColor = ballsMap[ball];
                colorsMap[curColor] -= 1;

                if (colorsMap[curColor] < 1) colorsMap.erase(curColor);
                ballsMap[ball] = color;
                colorsMap[color] += 1;
            }

            result.push_back(colorsMap.size());
        }

        return result;
    }
};