class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int len = password.size();
        if (len < 8) return false;

        std::string specialChars = "!@#$%^&*()-+";
        bool hasLower = false;
        bool hasUpper = false;
        bool hasDigit = false;
        bool hasSpecialChar = false;
        bool hasNoSameAdjacent = true;

        for (int i = 0; i < len; i++){
            if (std::islower(password[i])){
                hasLower = true;
            }

            if (std::isupper(password[i])){
                hasUpper = true;
            }

            if (std::isdigit(password[i])){
                hasDigit = true;
            }

            for (auto& c : specialChars){
                if (c == password[i]){
                    hasSpecialChar = true;
                }
            }

            if (i != len - 1){
                if (password[i] == password[i+1]){
                    hasNoSameAdjacent = false;
                }
            }
        }

        return (hasLower && hasUpper && hasDigit && hasSpecialChar && hasNoSameAdjacent);
    }
};