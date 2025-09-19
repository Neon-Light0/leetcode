class Solution {
public:
    int divisorSubstrings(int num, int k) {
        std::string numStr = std::to_string(num);
        int count = 0;

        for (int i = 0; i < (numStr.size() - k + 1); i++ ){
            int val = std::stoi(numStr.substr(i, k));

            if (val != 0 && num % val == 0){
                count += 1;
            }
        }

        return count;
    }
};