class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        std::priority_queue<long, std::vector<long>, std::greater<long>> minHeap(nums.begin(), nums.end());
        int nOps = 0;

        while (minHeap.top() < k){
            long first = minHeap.top();
            minHeap.pop();
            long second = minHeap.top();
            minHeap.pop();
            minHeap.push(std::min(first, second) * 2 + std::max(first, second));
            nOps += 1;
        }

        return nOps;
    }
};