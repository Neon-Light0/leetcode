class Solution {
public:
    int maximumScore(int a, int b, int c) {
        std::vector<int> piles = {a, b, c};
        std::sort(piles.begin(), piles.end());
        int res = 0;

        while (piles[2] > 0 && piles[1] > 0){
            piles[2] -= 1;
            piles[1] -= 1;
            res += 1;
            std::sort(piles.begin(), piles.end());
        }

        return res;
    }
};