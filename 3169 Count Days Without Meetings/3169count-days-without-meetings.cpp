class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        std::vector<std::vector<int>> answer;
        std::sort(meetings.begin(), meetings.end(), [](const std::vector<int>& a, const std::vector<int>& b){
            return a[0] < b[0];
        });
        
        answer.emplace_back(meetings[0]);

        for (int i = 1; i < meetings.size(); i++){
            if (answer.back()[1] >= meetings[i][0]){
                answer.back()[1] = std::max(answer.back()[1], meetings[i][1]);
            } else {
                answer.emplace_back(meetings[i]);
            }
        }

        int count = 0;
        int start = 1;

        for (int i = 0; i < answer.size(); i++){
            count += answer[i][0] - start;
            start = answer[i][1] + 1;
        }

        count += days - answer[answer.size() - 1][1];

        return count;
    }
};