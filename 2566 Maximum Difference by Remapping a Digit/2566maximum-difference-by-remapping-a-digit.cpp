class Solution {
public:
    int minMaxDifference(int num) {
        std::string maxStr = std::to_string(num);
        std::string minStr = maxStr;
        char lock = ' ';

        for (char& c : maxStr){
            if (lock == ' ' && c != '9'){
                lock = c;
                c = '9';
            } else if (lock != ' ') {
                if (c == lock){
                    c = '9';
                }
            }
        }

        lock = ' ';

        for (char& c : minStr){
            if (lock == ' ' && c != '0'){
                lock = c;
                c = '0';
            } else if (lock != ' ') {
                if (c == lock){
                    c = '0';
                }
            }
        }
        
        return stoi(maxStr) - stoi(minStr);
    }
};