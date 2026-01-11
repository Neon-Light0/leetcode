class Solution {
public:
    int reverseBits(int n) {
        std::vector<int> bits(32, 0);
        int pos = 31;

        while (n > 0){
            int bit = n & 1;
            bits[pos] = bit;
            n = n >> 1;
            pos -= 1;
        }

        int res = 0;

        for (int i = bits.size() - 1; i >= 0; i--) {
            res = res * 2 + bits[i];
        }

        return res;
    }
};