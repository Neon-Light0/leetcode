class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count = 0;
        int r, c;

        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                if (board[i][j] == 'R') {
                    r = i;
                    c = j; 
                }
            }
        }

        std::vector<std::vector<int>> directions = {{1,0}, {0,1}, {-1, 0}, {0, -1}};

        for (int i = 0; i < directions.size(); i++){
            int curR = r + directions[i][0];
            int curC = c + directions[i][1];

            while (curR >= 0 && curR < board.size() && curC >= 0 && curC < board[0].size()){
                char val = board[curR][curC];

                if (val == 'B') {
                    break;
                } else if (val == 'p'){
                    count++;
                    break;
                }

                curR += directions[i][0];
                curC += directions[i][1];
            }
        }   

        return count;
    }
};