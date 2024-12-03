class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        std::string answer;
        int j = 0;

        for (int i = 1; i < s.size() + 1; i++){
            if (j < spaces.size() && (spaces[j]) == i - 1){
                answer += ' ';
                j++;
            }

            answer += s[i - 1];
        }

        return answer;
    }
};