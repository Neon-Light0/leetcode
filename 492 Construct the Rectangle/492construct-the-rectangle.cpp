class Solution {
public:
    vector<int> constructRectangle(int area) {
        std::vector<int> answer(2, 0);

        int width = std::pow(area, 0.5);
    
        while (width > 0){
            int length = area / width;

            if (area % width == 0){
                answer[0] = length;
                answer[1] = width;
                break;
            }

            width -= 1;
        }

        return answer;
    }
};