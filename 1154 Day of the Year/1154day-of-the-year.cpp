class Solution {
public:
    int dayOfYear(string date) {
        int res = 0;

        int year = std::stoi(date.substr(0, 4));
        int months = std::stoi(date.substr(5,2));
        int days = std::stoi(date.substr(8));

        bool isLeapYear = year % 4 == 0;
        
        if (year % 100 == 0 && year % 400 != 0){
            isLeapYear = false;
        }

        for (int i = 1; i < months; i++){
            switch (i){
                case 2:
                    res += isLeapYear ? 29 : 28;
                    break;
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    res += 31;
                    break;
                default:
                    res += 30;
                    break;
            } 
        }

        return res + days;
    }
};