class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        std::vector<int> res;
        int carry = 0;

        for (int i = digits.size() - 1; i >= 0; i--){
            if (i == digits.size() - 1){
                carry = (digits[i] + 1) / 10;
                digits[i] = (digits[i] + 1) % 10;
            } else {
                if (carry != 0){
                    carry = (digits[i] + 1) / 10;
                    digits[i] = (digits[i] + 1) % 10;
                } else {
                    break;
                }
            }
        }

        if (carry == 1) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};