class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int answer = INT_MIN;
        
        auto comparePoints = [](const std::vector<int>& a, const std::vector<int>& b)->bool{
            return a[0] < b[0];
        };
        
        std::sort(points.begin(), points.end(), comparePoints);
        
        for (std::size_t i = 1; i < points.size(); i++){
            int diff = points[i][0] - points[i-1][0];
            
            if (diff > answer) answer = diff;
        }
        
        return answer;
    }
};