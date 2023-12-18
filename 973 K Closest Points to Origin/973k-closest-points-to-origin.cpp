class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        std::sort(points.begin(), points.end(), 
                  [](const std::vector<int>& a, const std::vector<int>& b){
                      int distanceA = a[0] * a[0] + a[1] * a[1];
                      int distanceB = b[0] * b[0] + b[1] * b[1];
                      return distanceA < distanceB;
                  } );
        
        return std::vector<std::vector<int>>(points.begin(), points.begin() + k);
    }
};