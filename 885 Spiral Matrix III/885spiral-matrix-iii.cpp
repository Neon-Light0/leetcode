class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        std::vector<std::vector<int>> visited = {{rStart, cStart}};
        int len = 1;
        int count = 0;
        int direction = 0;
        int deltaX = 0, deltaY = 0;

        while (visited.size() < rows * cols){
            switch (direction){
                case 0: //right
                    deltaX = 1;
                    deltaY = 0;
                    break;
                case 1: //down
                    deltaX = 0;
                    deltaY = 1;
                    break;
                case 2: //left
                    deltaX = -1;
                    deltaY = 0;
                    break;
                default: //up
                    deltaX = 0;
                    deltaY = -1;
                    break;
            }

            for (int i = 0; i < len; i++){
                cStart += deltaX;
                rStart += deltaY;

                if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols){
                    visited.push_back({rStart, cStart});
                }
            }

            count++;
            if (count % 2 == 0) len++;
            direction = (direction + 1) % 4;
        }

        return visited;
    }
};