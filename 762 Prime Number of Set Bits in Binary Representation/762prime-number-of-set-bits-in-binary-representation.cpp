class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        std::unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};

        for (int i = left; i < right + 1; i++){
            int num = i;
            int nSetBits = 0;

             while (num) {
                num &= (num - 1);
                nSetBits += 1;
            }

            if (primes.contains(nSetBits)){
                count += 1;
            }
        }

        return count;
    }
};