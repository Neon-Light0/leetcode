class Solution {
private:
    int mod(int a, int b) {
        return ((a % b) + b) % b;
    }
    
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        std::string answer = s;
        std::vector<int> prefixSums(s.size(), 0);

        for (int i = 0; i < shifts.size(); i++){
            int start = shifts[i][0];
            int end = shifts[i][1] + 1;
            int delta = shifts[i][2] == 0 ? -1 : 1;

            prefixSums[start] += delta;

            if (end < s.size()){
                prefixSums[end] -= delta;
            }
        }

        for (int i = 0; i < prefixSums.size(); i++){
            if (i != 0){
                prefixSums[i] += prefixSums[i-1];
            }
            
            answer[i] = 'a' + mod(answer[i] - 'a' + prefixSums[i], 26);
        }

        return answer;
    }
};