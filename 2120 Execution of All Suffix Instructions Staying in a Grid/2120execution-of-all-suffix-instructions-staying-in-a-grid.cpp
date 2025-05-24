class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int len = s.size();
        std::vector<int> answer(len, 0);

        for (int i = 0; i < len; i++){
            int r = startPos[0], c = startPos[1];
            
            for (int j = i; j < len; j++){
                char& dir = s[j];

                switch (dir) {
                    case 'L':
                        c -= 1;
                        break;
                    case 'R':
                        c += 1;
                        break;
                    case 'U':
                        r -= 1;
                        break;
                    case 'D':
                        r += 1;
                        break;
                }
                
                if (r >= 0 && r < n && c >= 0 && c < n){
                    answer[i] += 1;
                } else {
                    break;
                } 
            }
        }

        return std::move(answer);
    }
};