class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum = std::accumulate(batteries.begin(), batteries.end(), 0LL);
        long long left = 1, right = sum / n;

        while (left < right){
            long long target = right - (right - left )  / 2;
            long long extra = 0;

            for (long long power : batteries){
                extra += std::min(power, target);
            }

            if (extra >= static_cast<long long>(target * n) ){
                left = target;
            } else {
                right = target - 1;
            }
        }

        return left;
    }
};