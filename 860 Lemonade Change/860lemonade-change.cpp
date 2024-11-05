class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for (auto& bill : bills){
            if (bill == 10){
                if (five <= 0){
                    return false;
                }

                five -= 1;
                ten += 1;
            } else if (bill == 20){
                if (five > 0 && ten > 0){
                    five -= 1;
                    ten -= 1;    
                } else if (five >= 3){
                    five -= 3;
                } else {
                    return false;
                }
            } else {
                five +=1;
            }
        }

        return true;
    }
};