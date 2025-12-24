class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int count = 0;
        std::sort(capacity.begin(), capacity.end(), std::greater<int>());
        int total = std::accumulate(apple.begin(), apple.end(), 0);

        for (auto& c : capacity){
            if (total > 0) {
                total -= c;
                count += 1;
            } else {
                return count;
            }
        }

        return count;
    }
};