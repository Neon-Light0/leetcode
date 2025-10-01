class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int curBottles = numBottles;
        int curEmptyBottles = 0;
        int res = 0;

        while ( curBottles != 0){
            res += curBottles;
            curEmptyBottles += curBottles;
            curBottles = curEmptyBottles / numExchange;
            curEmptyBottles = curEmptyBottles % numExchange;
        }
        
        return res;
    }
};