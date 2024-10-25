class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        std::vector<string> strings(numRows, "");
        int index = 0;
        int step = 1;

        for (int i = 0; i < s.size(); i++){
            if (index >= numRows) {
                step = -1;
                index = index - 1 + step;
            } else if (index < 0){
                step = 1;
                index = index + 1 + step;
            }

            strings[index] += s[i];

            index += step;
        }

        string answer = "";

        for (auto& str : strings){
            answer += str;
        }

        return answer;
    }
};