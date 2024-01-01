class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        std::unordered_map<char, int> indices;
        int answer = -1;
        
        for (int i = 0; i < s.size(); i++){
            char c = s[i];
            
            if (indices.contains(c)){
                answer = std::max(answer, i - indices[c] - 1);
            } else {
                indices[c] = i;
            }
        }
        
        return answer;
    }
};