class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        auto compare = [&classes](const int& a, const int& b){
            double a0 = classes[a][0];
            double a1 = classes[a][1];
            double b0 = classes[b][0];
            double b1 = classes[b][1];

            double diff1 = (a0 + 1) / (a1 + 1) - (a0 / a1);
            double diff2 = (b0 + 1) / (b1 + 1) - (b0 / b1);

            return diff1 < diff2;
        };
        
        std::priority_queue<int, std::vector<int>, decltype(compare)> pq(compare);

        for (int i = 0; i < classes.size(); i++){
            pq.push(i);
        }

        for (int i = 0; i < extraStudents; i++){
            int top = pq.top();
            std::vector<int>& arr = classes[top];
            pq.pop();
            arr[0] = arr[0] + 1;
            arr[1] = arr[1] + 1;
            pq.push(top);
        }

        double sum = 0;
        
        while (!pq.empty()) {
            int top = pq.top();
            sum += (double) classes[top][0] / (double) classes[top][1];
            pq.pop();
        }

        return sum / (double) classes.size();
    }
};