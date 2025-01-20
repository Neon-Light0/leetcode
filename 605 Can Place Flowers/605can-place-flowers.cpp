class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int len = flowerbed.size();

        for (int i = 0; i < len; i++){
            int left = (i - 1) < 0 ? 0 : flowerbed[i - 1];
            int right = (i + 1) >= len ? 0 : flowerbed[i + 1];

            if (flowerbed[i] == 0 && left == 0 && right == 0){
                count += 1;
                flowerbed[i] = 1;
            }
        }


        return count >= n;
    }
};