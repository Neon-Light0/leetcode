class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int nWhite = 0;

        for (int i = 0; i < k; i++){
            if (blocks[i] == 'W'){
                nWhite += 1;
            }
        }

        int answer = nWhite;

        for (int i = k; i < blocks.size(); i++){
            if (blocks[i] == 'W'){
                nWhite += 1;
            }

            if (blocks[i - k] == 'W'){
                nWhite -= 1;
            }

            answer = std::min(answer, nWhite);
        }

        return answer;
    }
};