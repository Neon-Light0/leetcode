class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long count = 1;
        long long n = 1;

        for (int i = 1; i < prices.size(); i++){
            if (prices[i-1] - prices[i] == 1){
                n += 1;
            } else {
                n = 1;
            }

            count += n;
        }

        return count;
    }
};