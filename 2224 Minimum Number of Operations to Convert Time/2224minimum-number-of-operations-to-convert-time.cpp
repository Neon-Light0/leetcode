class Solution {
public:
    int convertTime(string current, string correct) {
        int count = 0;
        
        int currentMin = stoi(current.substr(0, 2)) * 60 + stoi(current.substr(3));
        int correctMin = stoi(correct.substr(0,2)) * 60 + stoi(correct.substr(3));
        int d = correctMin - currentMin;
        
        return d / 60 + d % 60 / 15 + d % 15 / 5 + d % 5;
    }
};