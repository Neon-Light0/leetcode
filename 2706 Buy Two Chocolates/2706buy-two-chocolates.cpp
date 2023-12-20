class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int first = INT_MAX;
        int second = INT_MAX;
        
        for (int price : prices){
            if (price < first){
                second = first;
                first = price;
            } else if (price < second){
                second = price;
            }
        }
        
        int sum = first + second;
        
        if (sum > money){
            return money;
        } else {
            return money - sum;
        }
    }
};