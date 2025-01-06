class Solution {
public:
    vector<int> minOperations(string boxes) {
        std::vector<int> answer(boxes.size(), 0);
        std::vector<int> positions;

        for (int i = 0; i < boxes.size(); i++){
            if (boxes[i] == '1'){
                positions.push_back(i);
            }
        }

        for (int i = 0; i < boxes.size(); i++){
            for (int j = 0; j < positions.size(); j++){
                answer[i] += std::abs(i - positions[j]);
            }
        }

        return answer;
    }
};