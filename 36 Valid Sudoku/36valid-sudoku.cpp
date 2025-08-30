class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        

        for (int i = 0; i < 9; i++){
            bool seenRow[10] = {false};
            bool seenCol[10] = {false};
            bool seenSquare[10] = {false};

            for (int j = 0; j < 9; j++){
                if (board[i][j] != '.'){
                    int val = board[i][j] - '0';

                    if (seenRow[val]){
                        return false;
                    } else {
                        seenRow[val] = true;
                    }
                }

                if (board[j][i] != '.'){
                    int val = board[j][i] - '0';

                    if (seenCol[val]){
                        return false;
                    } else {
                        seenCol[val] = true;
                    }
                }

                int y = i / 3 * 3 + j / 3;
                int x = i % 3 * 3 +  j % 3;

                if (board[y][x] != '.'){
                    int val = board[y][x] - '0';

                    if (seenSquare[val]){
                        return false;
                    } else {
                        seenSquare[val] = true;
                    }
                }
            }
        }

        return true;
    }
};