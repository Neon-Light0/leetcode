class Solution {
public:
    int countOdds(int low, int high) {
        bool isLowOdd = (low % 2) != 0;
        bool isHighOdd = (high % 2) != 0;

        if (low == high && isLowOdd){
            return 1;
        } else if (isLowOdd && isHighOdd){
            return 2 + (high - low - 1) / 2;
        } else if (!isLowOdd && !isHighOdd){
            return std::ceil((high - low - 1) / 2.0);
        } else {
            return (high - low + 1) / 2;
        } 
    }
};