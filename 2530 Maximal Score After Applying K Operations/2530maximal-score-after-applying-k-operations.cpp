class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        std::priority_queue<int> queue;

        for (int& num : nums){
            queue.push(num);
        }

        for (int i = 0; i < k; i++){
            int cur = queue.top();
            score += cur;
            queue.pop();
            queue.push(std::ceil(cur / 3.0));
        }

        return score;
    }
};