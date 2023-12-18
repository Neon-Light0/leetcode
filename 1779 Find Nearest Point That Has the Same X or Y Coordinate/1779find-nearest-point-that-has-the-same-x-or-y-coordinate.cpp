class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index = -1;
        int smallest = INT_MAX;
        
        for (std::size_t i = 0; i < points.size(); i++) {
            std::vector<int>& point = points[i];
            
            if (point[0] == x || point[1] == y){
                int distance = std::abs(point[0] - x) + std::abs(point[1] - y);
                if (distance < smallest){
                    smallest = distance;
                    index = i;
                }
            }
        }
        
        return index;
    }
};