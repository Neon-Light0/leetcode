class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long res = 0;
        std::sort(happiness.begin(), happiness.end(), std::greater<int>());

        for (int i = 0; i < k; i++){
            res += std::max(0, happiness[i] - i);
        }

        return res;
    }
};