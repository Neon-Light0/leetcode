class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        auto compare = [&nums](const int a, const int b){
            /*
            if (nums[a] == nums[b]){
                return a > b;
            }
            */
            return nums[a] > nums[b];
        };

        std::priority_queue<int, std::vector<int>, decltype(compare)> pq(compare);

        for (int i = 0; i < nums.size(); i++){
            pq.push(i);
        }

        for (int i = 0; i < k; i++){
            int curIndex = pq.top();
            pq.pop();
            nums[curIndex] *= multiplier;
            pq.push(curIndex);
        }

        return nums;
    }
};