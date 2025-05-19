class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int freq[101] = {0};
        int pos = -1;
        int n = nums.size();

        for (int i = n - 1; i >=0; i--){
            freq[nums[i]] += 1;

            if (freq[nums[i]] > 1){
                pos = i;
                break;
            }
        }

        if (pos == - 1){
            return 0;
        }

        int numOfOps = std::ceil((pos + 1) / 3.0);

        return numOfOps;
    }
};